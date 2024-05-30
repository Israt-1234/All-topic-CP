/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+9;
//int d[N][N],pref[N][N];
int a[N];
int t[N * 4];
void build_tree(int node , int b, int e){
    if(b == e)
    {
        t[node] = a[b];
        return;
    }

    int l = 2*node;
    int r = l+1;
    int mid = (b+e)/2;
    build_tree(l, b, mid);
    build_tree(r, mid+1, e);
    t[node] = t[l] + t[r];
}
//query logn 
int query(int node, int b, int e, int i, int j){
    if(b > j or e<i)
    return 0;
    if(b >= i and e <= j)
    return t[node];
    int l = 2*node;
    int r = l+1;
    int mid = (b+e)/2;
    return query(l,b,mid, i ,j) + query(r, mid+1, e, i, j);

}
//update
void update(int node, int b, int e, int i, int x){
     if(b > i or e<i)
    return;
    if(b == i and e == i){
     t[node] = x;
     return;
     }
    int l = 2*node;
    int r = l+1;
    int mid = (b+e)/2;
    update(l, b, mid, i, x);
    update(r, mid+1, e, i, x);
    t[node] = t[l] + t[r];

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
     build_tree(1, 1, n);
     cout << "sum" << " ";
     cout << t[1] << endl;
     //query   2-4
     cout <<"query sum is "<< query(1, 1, n, 2, 4) <<endl;
     update(1, 1, n, 3, 10);
      cout <<"query sum is "<< query(1, 1, n, 2, 4) <<endl;
    return 0;
}




// /*........Hard work and consistency is the only way to success........ */
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N=1005;
// //int d[N][N],pref[N][N];
// int a[N];
// int t[N];
// void build_tree(int node, int b, int e){
//     if(b == e){
//         t[node] = a[b];
//         return;
//     }
//     int l = node * 2;
//     int r = l+1;
//     int mid = (b+e)/2;
//     build_tree(l, b, mid);
//     build_tree(r, mid+1, e);
//     t[node] = t[l] + t[r];
// }

// int query(int node, int b, int e , int i, int j){
//     if(i>e or b>j){
//         return 0;
//     }
//     if(i<=b and e<=j){  
//         return t[node];
//     }
//     int l = node * 2;
//     int r = l+1;
//     int mid = (b+e)/2;
//     int p = query(l, b, mid, i, j);
//     int q = query(r, mid+1, e, i, j);
//     return p + q;
// }

// void update(int node, int b, int e, int i, int x){
//        if(i>e or b>i){
//         return;
//     }
//     if(i==b and e==i){  
//         t[node] = x;
//         return;
//     }
//     int l = node * 2;
//     int r = l+1;
//     int mid = (b+e)/2;
//     update(l, b, mid, i, x);
//     update(r, mid+1, e, i, x);
//     t[node] = t[l] + t[r];
// }
// int main()
// {
//     // clock_t st= clock();
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n; cin>> n;
//     for(int i = 1; i <= n; i++){
//         cin>> a[i];
//     }
//      build_tree(1, 1, n);
//      cout << t[1] <<endl;

//      cout << query(1, 1, n, 2, 4)<<endl;

//      update(1, 1, n, 2, 10);
//     cout << query(1, 1, n, 2, 4)<<endl;
    
//     return 0;
// }