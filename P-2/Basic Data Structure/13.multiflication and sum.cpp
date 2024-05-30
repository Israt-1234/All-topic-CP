/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+9;
const ll mod = 1e9+7;
ll lazy[N*4];
ll t[N*4];
void push(ll n, ll b, ll e){
    if(lazy[n] == 1)
    return;
    t[n] = 1LL * t[n] * lazy[n] % mod;
    if(b!=e){
        ll l = n*2;
        ll r = l+1;
        ll mid = (b+e) / 2;
        lazy[l] =1LL * lazy[l]*lazy[n] % mod;
        lazy[r] =1LL* lazy[r] * lazy[n] % mod ;
    }
    lazy[n] = 1;
}
void build(ll n, ll b, ll e){
    lazy[n] = 1;
    if(b == e){
        t[n] =  1;
        return;
    }
    ll l = n * 2;
    ll r = l + 1;
     ll mid = (e+b)/2;
     build(l, b, mid);
     build(r, mid+1, e);
     t[n] = (t[l] + t[r]) % mod;
}
void update(ll n, ll b, ll e, ll i, ll j, ll v){
    push(n, b, e);
    if(b > j or e < i) return;
    if(b>=i and e <= j){
        lazy[n] = v;
         push(n, b, e);
        return;
    }
    ll l = n * 2;
    ll r = l + 1;
    ll mid = (e+b)/2;
     update(l, b, mid, i, j, v);
     update(r, mid+1, e, i, j, v);
     t[n] = (t[l] + t[r] ) % mod;
}

ll query(ll n, ll b, ll e, ll i, ll j){
   push(n, b, e);
    if(b > j or e < i) return 0;
    if(b>=i and e<=j) 
    return t[n];
    ll l = n * 2;
    ll r = l + 1;
    ll mid = (e+b)/2;
    ll p = query(l, b, mid, i, j);
    ll q = query(r, mid+1, e, i, j);
    return (p + q)%mod;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m; cin >> n >> m;
    build(1, 1, n);
    while(m--){
        int ty; cin >> ty;
        if(ty == 1){
            ll l, r, v; cin >> l >> r >> v;
            l++;
            update(1, 1, n, l, r, v);
        }
        else{
            
            ll l, r; cin >> l >> r;
           l++;
            cout << query(1, 1, n, l, r)<<endl;
        }
    }
    return 0;
}