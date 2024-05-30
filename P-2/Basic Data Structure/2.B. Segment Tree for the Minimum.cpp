/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+9;
//int d[N][N],pref[N][N];
ll a[N];
ll t[N*4];
void build(ll node, ll b, ll e){
    if(b == e){
        t[node] = a[b];
        return;
    }
     ll l = node*2 +1;
     ll r = l+1;
     ll mid = (e+b) / 2;
     build(l, b, mid);
     build(r, mid+1, e);
     t[node] = min(t[l], t[r]);
    
}
ll query(ll node, ll b, ll e, ll i, ll j){
    if(b > j or e < i)
    return 1e9+7;
    if(b >= i and  e <= j){
      return t[node];
    }
     ll l = node*2 +1;
     ll r = l+1;
     ll mid = (e+b) / 2;
     ll p = query(l, b, mid , i, j);
     ll q = query(r, mid+1, e, i, j);
     return min(p, q);
}

void upd(ll node, ll b, ll e, ll i, ll x){
    if(b > i or e < i)
    return;
    if(b == e){
        t[node] =x;
        return;
    }
     ll l = node*2 +1;
     ll r = l+1;
     ll mid = (e+b) / 2;
     upd(l, b, mid, i, x);
     upd(r, mid+1, e, i, x);
     t[node] = min(t[l], t[r]);
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin>> n >> m;
    for(int i = 0 ;i < n; i++)
    cin >> a[i];
   build(0, 0, n-1);
    while(m--){
        int ty ; cin>> ty;
        if(ty == 1){
             int i, v; cin >> i >> v;
            upd(0, 0 , n-1, i , v);
           
        }
        else{
           int l, r; cin >> l >> r;
           cout<<query(0, 0 , n-1, l, r-1)<<endl; 
        }
    }
    return 0;
}