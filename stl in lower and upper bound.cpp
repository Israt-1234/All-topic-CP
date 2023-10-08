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

    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;

     int trg; cin>>trg;
    auto it=lower_bound(v.begin(),v.end(),trg);
    cout<<distance(v.begin(),it)<<endl;
    if(it==v.end())
        cout<<"NOt found"<<endl;
    else
        cout<<"found"<<endl;

     auto iit=upper_bound(v.begin(),v.end(),trg);
    cout<<distance(v.begin(),iit)<<endl;
    if(iit==v.end())
        cout<<"NOt found"<<endl;
    else
        cout<<"found"<<endl;
        //another uppper bound print
      cout<<((iit==v.end()) ? "not found": to_string(*iit)) <<endl;
}
