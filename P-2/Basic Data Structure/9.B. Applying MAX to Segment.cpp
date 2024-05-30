/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+9;
ll a[N];
ll t[N*4];
ll lazy[N*4];
//int d[N][N],pref[N][N];
void push(ll n, ll b, ll e){
    if(lazy[n] == 0)
    return;
    t[n] = max(lazy[n], t[n]);
    if(b!=e){
    ll l = n * 2;
    ll r = l+1;
    ll mid = (e + b)/2;
        lazy[l] = max(lazy[l], lazy[n]);
        lazy[r] = max(lazy[r], lazy[n]); 
    }
    lazy[n] = 0;

}
void build(ll n, ll b, ll e){
    if(b == e){
        t[n] = a[b];
        return;
    }
    ll l = n * 2;
    ll r = l+1;
    ll mid = (e + b)/2;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = max(t[l], t[r]);
}
void upd(ll n, ll b, ll e, ll i, ll j, ll v){
    push(n, b, e);
    if(b > j or e < i) return;
    if(b>=i and e<=j){
        lazy[n] = v;
        return;
    }
    ll l = n * 2;
    ll r = l+1;
    ll mid = (e + b)/2;
   upd(l, b, mid, i, j, v);
   upd(r, mid+1, e, i, j, v);
    t[n] = max(t[l], t[r]);
}
ll query(ll n, ll b, ll e, ll i, int j){
     push(n, b, e);
     if(b > j or e < i) return 0;
     if(b >= i and e <= j)
     return t[n];
     ll l = n * 2;
    ll r = l+1;
    ll mid = (e + b)/2;
    ll p = query(l, b, mid, i, j);
    ll q = query(r, mid+1, e, i, j);
    return max(p, q);    
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m; cin >> n >> m;
    build(1,1,n);
    while(m--){
        ll ty; cin >> ty;
        if(ty == 1){
           ll i,j,v;  cin >> i >> j >> v;
          j--;
           i++;   j++;
            upd(1, 1, n, i, j, v);
        }
        if(ty == 2){
            ll i; cin >> i;
             i++;
            cout << query(1, 1, n, i, i)<<endl;
        }
    }

    return 0;
}