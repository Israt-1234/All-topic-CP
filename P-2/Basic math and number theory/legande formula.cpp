/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];

ll legend_better(ll n, ll p){
    ll cur=p;
    ll ans=0;
    while(n){
        ans+=n/p;
        n/=p;
    }
    return ans;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, p;
    cin>>n>>p;
   ll result= legend_better( n,  p);
   cout<<result<<endl;

    
    return 0;
}