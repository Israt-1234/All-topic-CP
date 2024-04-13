/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll l,r;cin>>l>>r;
     cout<<"YES\n";
     for(ll i=l;i<=r;i+=2 )
     cout<<i<<" "<<i+1<<endl;
    return 0;
}