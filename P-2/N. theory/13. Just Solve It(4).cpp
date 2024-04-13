/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
ll divisor(ll lcm, ll num){
    return num/lcm;
}
ll solution(ll lcm, ll l, ll r){
       return  divisor(lcm, r)-divisor(lcm, l-1);
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,l,r;
    cin>>n>>m>>l>>r;
    ll gcd=__gcd(n,m);
    if((long double) n/gcd>(long double) r/m)
    cout<<0<<endl;
    else{
    ll lcm=(n/gcd)*m;
    ll ans= solution(lcm,l,r);
   cout<<ans<<endl;
    }
    // cout<<(n*m)/__gcd(n,m);
    return 0;
}