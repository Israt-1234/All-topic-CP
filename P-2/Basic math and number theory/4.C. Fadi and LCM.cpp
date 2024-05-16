
/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
ll lcm(ll a, ll b){
    return a/__gcd(a, b)*b;
}
ll solve (ll n) {
    ll ans;
    for(int i = 1; 1LL*i*i <= n; i++){
        if(n%i==0 and lcm(i, n/i) == n){
          
            ans = i;
          //  cout<<ans<<" "<<n/ans<<endl;
        }
    }
    //cout<<ans<<" "<< n/ans<<endl;
    return ans;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    ll res= solve(n);
    cout << res << " "<<n/res<<endl;
    return 0;
}