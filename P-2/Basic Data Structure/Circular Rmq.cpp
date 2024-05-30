/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5 + 9;
ll inf = 1e14+9;
//int d[N][N],pref[N][N];
ll a[N];
ll t[N*4];
ll lazy[N*4];
void push(ll n, ll b, ll e){
    if(lazy[n] == 0)
    return;
     t[n] += lazy[n];
     if(b!=e){
    ll l = n* 2;
    ll r = l + 1;
    ll mid = (e+b)/2;
     lazy[l] += lazy[n];
     lazy[r] +=  lazy[n];
     }
     lazy[n] = 0;
}
void build(ll n, ll b, ll e){
    
    if(b == e){
        t[n] =  a[b];
        return;
    }
    ll l = n * 2;
    ll r = l + 1;
     ll mid = (e+b)/2;
     build(l, b, mid);
     build(r, mid+1, e);
     t[n] = min(t[l] , t[r]);
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
     t[n] = min(t[l] ,  t[r]);
}

ll query(ll n, ll b, ll e, ll i, ll j){
   push(n, b, e);
    if(b > j or e < i) return inf;
    if(b>=i and e<=j) 
    return t[n];
    ll l = n * 2;
    ll r = l + 1;
    ll mid = (e+b)/2;
    ll p = query(l, b, mid, i, j);
    ll q = query(r, mid+1, e, i, j);
    return min(p, q);
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m; cin >> n;
    for(int i = 1 ; i<=n; i++)
    cin >> a[i];
    cin>>m;
    cin.ignore();
    build(1, 1, n);
    while(m--){
        string line;
        getline(cin, line);
        stringstream ss(line);
        int l,r, v;
        ss >> l >> r;
        ++l; ++r;
        if(ss>>v){
         if(l<=r){
            update(1, 1, n, l, r, v);    
         }
         else{
              update(1, 1, n, l, n, v);
              update(1, 1, n, 1, r, v);
            }
        }
        else{
         ll ans = inf;
         if(l<=r)
         ans = query(1, 1, n, l, r);
         else{
         ans = query(1, 1, n, l, r);
         ans = min(ans, query(1, 1, n, l, r));

         }
        }
    }
    return 0;
}