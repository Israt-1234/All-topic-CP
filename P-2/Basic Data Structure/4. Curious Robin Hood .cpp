/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5;
int a[N];
ll t[N*4];
//int d[N][N],pref[N][N];
void build(int n , int b, int e){
    if(b == e) {
        t[n] = a[b];
        return;
    }
     ll mid = (b+e)/2;
    ll l = n*2;
    ll r = l+1;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n]=t[l] + t[r];
}
void upd1(int n, int b, int e, int i){
    if(i < b or e < i) return;
    if(b == e){
        t[n] = 0;
        return;
    }
     ll mid = (b+e)/2;
    ll l = n*2;
    ll r = l+1;
    upd1(l, b, mid, i);
    upd1(r, mid+1, e, i);
     t[n]=t[l] + t[r];
}

void upd2(int n, int b, int e, int i, int v){
    if(i < b or e < i) return;
    if(b == e){
        t[n] += v;
        //cout << t[n] << endl;
        return;
    }
    ll mid = (b+e)/2;
    ll l = n*2;
    ll r = l+1;
    upd2(l, b, mid, i, v);
    upd2(r, mid+1, e, i, v);
     t[n] = t[l] + t[r];
}
ll query(int n, int b, int e, int i, int j){
    if(j<b or e<i) return 0;
    if(b >= i and e <= j){
        return t[n];
    }
    ll mid = (b+e)/2;
    ll l = n*2;
    ll r = l+1;
    ll p = query(l, b, mid, i, j);
    ll q = query(r, mid+1, e, i, j);
    return p+q;
}

int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    int c=0;
  while(t--){
    cout << "Case " << ++c <<":" <<endl;
      int n, m ; cin >> n >> m;
    for(int i = 1; i <= n; i++)
    cin >> a[i];
     build(1, 1, n);
    while(m--){
        int ty; cin >> ty;
        if(ty == 1){
            int i; cin >>i;
            i++;
            cout << query(1, 1, n, i, i) << endl;
            upd1(1, 1, n, i);
        }
        else if(ty == 2){
            int i, v; cin >> i >> v;
            i = i+1;
            upd2(1, 1, n, i, v);
        }
        else{
            int l, r; cin >> l >> r;
            l+=1; r+=1;
            //upd2(1, 1, n, l, r);
            long long ans = query(1, 1, n, l, r);
            cout << ans << endl;
        }
    }
  }
    
    return 0;
}