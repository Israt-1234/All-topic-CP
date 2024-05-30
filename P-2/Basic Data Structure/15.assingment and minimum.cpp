/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+9;
const ll inf=1e9+9;
//int d[N][N],pref[N][N];
ll a[N];
ll t[N*4];
ll lazy[N*4];
void push(ll n, ll b, ll e){
    if(lazy[n] == -1)
    return;
    t[n] = lazy[n];
    if(b!=e){
    ll l = n * 2;
    ll r = l + 1;
     ll mid = (e+b)/2;
     lazy[l] = lazy[n];
     lazy[r] = lazy[n];
  
    }
    lazy[n]=-1;
}
void build(ll n, ll b, ll e){
  lazy[n] = -1;
    if(b==e){
        t[n] = a[b];
        return;
    }
     ll l = n * 2;
    ll r = l + 1;
     ll mid = (e+b)/2;
     build(l, b, mid);
     build(r, mid+1, e);
     t[n] = min(t[l] , t[r]);
}

void upd(ll n, ll b, ll e, ll i, ll j, ll v){
   push(n ,b, e);
    if(b>j or e<i) return;
    if(b>=i and e<=j){
        lazy[n] = v;
        push(n,b,e);
        return;
    }
    ll l = n * 2;
    ll r = l + 1;
     ll mid = (e+b)/2;
     upd(l, b, mid, i, j, v );
     upd(r, mid+1, e, i, j, v);
     t[n] = min(t[l] , t[r]);
}

ll query(ll n, ll b, ll e, ll i, ll j){
   push(n,b,e);
    if(b>j or e<i) return inf;
    if(b>=i and e<=j){
        return t[n];
    }
    ll l = n * 2;
    ll r = l + 1;
     ll mid = (e+b)/2;
    ll p= query(l, b, mid, i, j);
    ll q = query(r, mid+1, e, i, j);
    return min(p, q);
}

int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        ll n, m; cin >> n>> m;
    build(1, 1, n);
    while(m--){
        ll ty ; cin>>ty;
        if(ty==1){
             ll l , r, v; cin>>l >> r >>v;
        --r;
        l++; r++;
       // for(int i = l ; i<=r; i++)
      //  a[i]+=v;
        upd(1, 1, n, l, r, v);
        }
        else{
            ll l,r;cin>>l>>r;
            l++;
            cout << query(1, 1, n, l, r) <<endl;
        }
    }

    return 0;
}