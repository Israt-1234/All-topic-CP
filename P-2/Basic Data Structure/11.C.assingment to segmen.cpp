/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+9;
//int d[N][N],pref[N][N];
int a[N];
ll t[N*4];
ll lazy[N*4];
void push(int n, int b, int e){
    if(lazy[n] == -1)
    return;
    t[n] = 1LL*(e-b+1)*lazy[n];
    if(b!=e){
     int l = n*2; int r = l+1;
    int mid = (b+e)/2;
        lazy[l] = lazy[n];
        lazy[r] = lazy[n];
    }
    lazy[n] = -1;
}
void build(int n, int b, int e){
   lazy[n]=-1;
    if(b == e){
        t[n]=a[b];
        return;
    }
    int l = n*2; int r = l+1;
    int mid = (b+e)/2;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = t[l] + t[r];
}
void upd(int n, int b, int e, int i, int j, int x){
   push(n, b, e);
    if(b > j or e < i) return;
    if(b>=i and e <=j){
        lazy[n] = x;
        return;
    }
    int l = n*2; int r = l+1;
    int mid = (b+e)/2;
    upd(l, b, mid, i, j, x);
    upd(r, mid+1, e, i, j, x);
    t[n] = t[l] + t[r];
}

ll query(int n, int b, int e, int i, int j){
     push(n, b, e);
     if(b > j or e < i) return 0;
    if(b>=i and e <=j){
        return t[n];
    }
        int l = n*2; int r = l+1;
    int mid = (b+e)/2;
    int p = query(l, b, mid, i, j);
    int q = query(r, mid+1, e, i, j);
    return p+q;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    build(1, 1, n);
    while(m--){
        int ty; cin >> ty;
        if(ty == 1){
            int l , r, v; cin >> l >> r >> v;
            l++;
            upd(1, 1, n, l, r, v);
        }
        else{
            int i; cin >> i;
            i++;
            cout << query(1, 1, n, i, i)<<endl;

        }
    }
    return 0;
}