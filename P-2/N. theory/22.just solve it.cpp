/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int mul(ll a, ll b, ll mod){
    return __int128(a)*b%mod;
}
int power(ll a, ll b, ll mod){
    int ans=1%mod;
    while(b){
        if(b&1)
        ans=mul(ans, a,mod);
        a=mul(a,a,mod);
        b>>=1;
    }
    return ans;
}
int inverse(ll b, ll mod){
    return power(b, mod-2,mod);
}


int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,p;
    cin>>a>>b>>p;
     cout<<power(a,b,p)<<endl;
     cout<<mul(a,b,p)<<endl ;
     cout<<mul(a,inverse(b, p), p)<<endl;

    return 0;
}