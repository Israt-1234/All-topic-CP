/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=17;
int spf[N];
//int d[N][N],pref[N][N];

int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=2;i<N;i++)
    spf[i]=i;
     vector<int>v;
     vector<int>v1;
    for(int i=2;i<N;i++){
        for(int j=i;j<N;j+=i){
        spf[j]=min(spf[j],i);
        // cout<<spf[j]<<" "<<j<<endl;
        }
    }
    

    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        vector<int>ans;
        while(n>1){
            ans.push_back(spf[n]);
            n/=spf[n];
        }
        for(auto x: ans)
        cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}