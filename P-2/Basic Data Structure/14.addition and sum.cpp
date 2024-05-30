/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+9;
//int d[N][N],pref[N][N];
ll a[N];
ll t[N*4];
ll lazy[N*4];
void push(ll n, ll b, ll e){
    if(lazy[n]==0)
    return;
    t[n] = t[n] + (e-b+1)*lazy[n];
    if(b!=e){
     ll l = n * 2;
    ll r = l + 1;
    ll mid = (e+b)/2;

        lazy[l] += lazy[n];
        lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}
void build(ll node, ll b, ll e){
    if(b==e){
        t[node]=a[b];
        return;
    }
    ll l = node * 2;
    ll r = l + 1;
     ll mid = (e+b)/2;
     build(l, b, mid);
     build(r, mid+1, e);
     t[node] = t[l] + t[r];
}

void upd(ll node, ll b, ll e, ll i, ll j, ll v){
   push(node, b, e);
    if(b>j or e<i) return;
    if(b >= i and e<=j){
         lazy[node] += v;
         push(node, b,e);
         return;
    }
    ll l = node * 2;
    ll r = l + 1;
     ll mid = (e+b)/2;
     upd(l, b, mid, i, j, v);
     upd(r, mid+1, e, i, j, v);
     t[node] = t[l] + t[r];
}

ll query (ll node, ll b, ll e, ll i, ll j){
        push(node, b, e);
        if(b>j or e<i) return 0;
        if(b >= i and e<=j){
        return t[node];
        }
       ll l = node * 2;
       ll r = l + 1;
       ll mid = (e+b)/2;
       ll p = query(l, b, mid, i, j);
       ll q = query(r, mid+1, e, i, j);
       return p+q;
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