/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e5+9, inf = 1e9+9;


//int d[N][N],pref[N][N];
struct node{
    ll mn, count;
};
ll a[N];
node t[N*4];
node marge(node l, node r){
    node ans;
    ans.mn = min(l.mn , r.mn);
    ans.count = 0;

    if(l.mn == ans.mn)
    ans.count += l.count;

    if(r.mn == ans.mn)
    ans.count += r.count;
    return ans;
    
}

void build(ll n, ll b, ll e ){
    if(b == e){
        t[n].mn = a[b];
        t[n].count = 1;
        return;
    }
    ll mid = (b+e)/2;
    ll l = n*2;
    ll r = l+1;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = marge(t[l], t[r]);
}

node query(ll n, ll b, ll e, ll i, ll j){
    if(j < b or i> e) return {inf, 1};
    if(i <= b and j>=e){
        return t[n];
    }
     ll mid = (b+e)/2;
    ll l = n*2;
    ll r = l+1;
    return marge(query(l, b, mid, i, j) , query(r, mid+1, e, i , j));
}

void upd(ll n , ll b, ll e, ll i, ll x){
     if( i < b or i> e) return;
     if(b==e){
        t[n].mn = x;
        t[n].count = 1;
        return;
     }
    ll mid = (b+e)/2;
    ll l = n*2;
    ll r = l+1;
    upd(l, b, mid, i, x);
    upd(r, mid+1, e, i, x);
    t[n] = marge(t[l], t[r]);

}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q; cin >> n >> q;
    for(int i = 1; i <= n; i++)
    cin>> a[i];

    build(1, 1 , n);
    while(q--){
        ll check, b, e, i,v;
        cin >> check;
        
        if(check == 2){
            cin >> b >> e;
            e--;
            b++; e++;
            node ans = query(1, 1, n, b, e);
             cout << ans.mn << " "<<ans.count<<endl; 
        }
       
        else{
          cin >> i >> v;
          i++;
          upd(1, 1, n, i, v);
        }   
        
    }
    return 0;
}