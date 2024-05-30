//index 1;

/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e6+1;
//int d[N][N],pref[N][N];
ll a[N];
ll t[N*4];
void  build(ll node, ll b, ll e){
   if(b == e){
    t[node] = a[b];
    return;
   }
    ll l = node*2;
    ll r = l+1;
    ll mid = (b+e)/2;
    build(l, b, mid);
    build(r, mid+1, e);
    t[node] = t[l] + t[r];

}

ll query(ll node, ll b, ll e, ll i, ll j){
     if(i>e  or j<b){
        return 0;
     }
     if(i <= b and e <= j)
     return t[node];
    ll l = node*2;
    ll r = l+1;
    ll mid = (b+e)/2;
    return query(l, b, mid, i, j)+query(r, mid+1, e, i, j);

}
void update(ll node, ll b, ll e, ll i, ll x){
     if(i>e  or i<b){
        return;
     }
     if(i == b and e==i){     
         t[node] = x;
       return;
     }   
    ll l = node*2;
    ll r = l+1;
    ll mid = (b+e)/2;
    update(l, b, mid, i, x);
    update(r, mid+1, e, i, x);
    t[node] = t[l] + t[r];
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
            cout << query(1, 1, n, b, e)<<endl;
        }
        else{
          cin >> i >> v;
          i++;
          update(1, 1, n, i, v);
        }
       
        
    }

    return 0;
}


//index 0
/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e6+1;
//int d[N][N],pref[N][N];
ll a[N];
ll t[N*4];
void  build(ll node, ll b, ll e){
   if(b == e){
    t[node] = a[b];
    return;
   }
    ll l = node*2+1;
    ll r = l+1;
    ll mid = (b+e)/2;
    build(l, b, mid);
    build(r, mid+1, e);
    t[node] = t[l] + t[r];

}

int query(ll node, ll b, ll e, ll i, ll j){
     if(i>e  or j<b){
        return 0;
     }
     if(i <= b and e <= j)
     return t[node];
    ll l = node*2+1;
    ll r = l+1;
    ll mid = (b+e)/2;
    return query(l, b, mid, i, j)+query(r, mid+1, e, i, j);

}
void update(ll node, ll b, ll e, ll i, ll x){
     if(i>e  or i<b){
        return;
     }
     if(i == b and e==i){     
         t[node] = x;
       return;
     }   
    ll l = node*2+1;
    ll r = l+1;
    ll mid = (b+e)/2;
    update(l, b, mid, i, x);
    update(r, mid+1, e, i, x);
    t[node] = t[l] + t[r];
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q; cin >> n >> q;
    for(int i = 0; i < n; i++)
    cin>> a[i];

    build(0, 0 , n);
    while(q--){
        ll check, b, e, i,v;
        cin >> check;
        
        if(check == 2){
            cin >> b >> e;
            cout << query(0, 0, n, b, e-1)<<endl;
        }
        else{
          cin >> i >> v;
          update(0, 0, n, i, v);
        }
       
        
    }

    return 0;
}
