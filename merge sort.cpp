#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e4+9;
vector<int>merge(vector<int>l, vector<int>r){
   vector<int>ans;
   int i=0 , j=0;
   while(i<l.size() and j<r.size()){
    if(l[i]<r[j]){
        ans.push_back(l[i]);
    i++;
   }
   else{
    ans.push_back(r[j]);
    j++;
     }
   }
   while(i<l.size()){
    ans.push_back(l[i]);
    i++;
   }
   while(j<r.size()){
    ans.push_back(r[j]);
    j++;
   }
   return ans;
}
int a[N];
vector<int>merge_sort(int l, int r)
{
    if(l==r)
    return {a[l]};
    int mid=(l+r)/2;
    vector<int>L = merge_sort(l, mid);
    vector<int>R= merge_sort(mid+1, r);
    return merge (L, R);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    auto ans = merge_sort(0, n-1);
    for(auto x: ans){
        cout<<x<<' ';
    }
    cout<<endl;
    return 0;

}







