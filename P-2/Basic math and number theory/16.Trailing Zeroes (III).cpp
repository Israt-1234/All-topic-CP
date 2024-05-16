/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
ll legendary (ll n, ll p){
    ll ans = 0;
    while(n){
        ans += n/p;
        n /= p;
    }
    return ans;
}
ll get_tralling_zero(ll n){
    return legendary( n, 5);
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int c = 0;
    while(n--){
        ll q; cin >> q;
        ll l = 1; ll r = q*5;
        ll ans = -1;
        while(l<=r){
            ll mid = (l+r)/2;
             ll  zeros = get_tralling_zero(mid);
            if(zeros == q){
                ans = mid ;
                r = mid - 1;
            }
            else if(zeros < q){
                l = mid +1;
            }
            else{
                r = mid - 1;
            }
        }
        cout << "Case "<< ++c << ": ";
        if(ans == -1)
        cout << "impossible\n";
        else
        cout << ans << endl; 
        

    }
    return 0;
}