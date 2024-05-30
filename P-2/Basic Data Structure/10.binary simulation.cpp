/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+9;
struct node {
    int ones, zeroes;
};
string a;
node t[N*4];
bool lazy[N*4];

void push(int n, int b, int e){
    if(lazy[n] == false)
    return;
    swap(t[n].ones, t[n].zeroes);
    if(b!=e){
        int mid = (b+e)/2;
        int l = n * 2; int r = l+1;
        lazy[l]^=true;
        lazy[r]^=true;
    }
    lazy[n] = false;
}

node marge(node l, node r){
    node ans;
    ans.ones = l.ones+r.ones;
    ans.zeroes = l.zeroes+r.zeroes;
    return ans;
}
void build(int n, int b, int e){
   lazy[n] = false;
    if(b==e){
        t[n].ones = t[n].zeroes = 0;
        if(a[b] == '1')
        t[n].ones = 1;
        else
        t[n].zeroes=1;
        return;
    }
    int mid = (b+e) / 2;
    int l = n*2; int r = l+1;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = marge(t[l], t[r]);
}

void upd(int n, int b, int e, int i, int j){
    push(n, b, e);
    if(e<i or j<b) return;
        if(b>=i and e<=j){
        lazy[n] = true;
        return;
    }
    int l = n * 2;
    int r = l+1;
    int mid = (e + b)/2;
   upd(l, b, mid, i, j);
   upd(r, mid+1, e, i, j);
    t[n] = marge(t[l], t[r]);

}
node query(int n, int b, int e, int i, int j){
    push(n, b, e);
     if(b > j or e < i) return {0,0};
     if(b >= i and e <= j)
     return t[n];
     int l = n * 2;
    int r = l+1;
    int mid = (e + b)/2;
    node p = query(l, b, mid, i, j);
    node q = query(r, mid+1, e, i, j);
    return marge(p, q);    

}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    int c = 0;
    while(t--){
        cout << "Case "<<++c <<":\n";
      cin >> a;
      int n = a.size();
      build(1, 0, n-1);
      int q; cin >> q;
      while(q--){
        char ty; cin >> ty;
        if(ty == 'I'){
            int l, r; cin >> l >> r;
           --l;--r;
            upd(1, 0, n-1, l, r);
        }
        else{
            int i; cin >> i;
            --i;
            node ans = query(1, 0, n-1, i, i);
            if(ans.ones == 1)
            cout << 1 << endl;
            else
            cout << 0 << endl;
        }
      }  
    }
    return 0;
}