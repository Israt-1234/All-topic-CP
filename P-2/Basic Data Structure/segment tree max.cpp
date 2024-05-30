/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+9;
//int d[N][N],pref[N][N];
int a[N];
int t[N*4];
void build(int node, int b, int e){
    if(b==e){
        t[node] = a[b];
        return;
    }
    int l = node<<1;  //  node*2;
    int r = l | 1;    // l+1;
    int mid = (b+e) >> 1;  // (b+e)/2
    build(l, b, mid);
    build(r, mid+1, e);
    t[node] = max(t[l], t[r]);

}

void update(int node, int b, int e, int i, int x){
    if(b>i or e < i) return;
    if(b == i and e == i){
        t[node]=x;
        return;
    }
    int l = node<<1;  //  node*2;
    int r = l | 1;    // l+1;
    int mid = (b+e) >> 1;  
    update(l, b, mid, i, x);
    update(r, mid+1, e, i, x);
    t[node]=max(t[l], t[r]);
}
int query(int node, int b, int e, int i, int j){
   if(b > j or e < i) return -1111;
   if(b>=i and e<=j) return t[node];
    int l = node<<1;  //  node*2;
    int r = l | 1;    // l+1;
    int mid = (b+e) >> 1;  
    return max(query(l, b, mid, i, j), query(r, mid+1, e, i, j));
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for(int i = 1 ; i <= n; i++){
        cin >> a[i];
    }
    build(1, 1, n);
    update(1, 1, n, 2, 10);
    cout << query(1, 1, n, 1, 4) << endl;

    return 0;
}