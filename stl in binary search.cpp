#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];
        int trg; cin>>trg;
    sort(v.begin(),v.end());
    bool ans=binary_search(v.begin(),v.end(),trg);
    if(ans)  cout<<"found"<<endl;
    else     cout<<"not found"<<endl;
}

