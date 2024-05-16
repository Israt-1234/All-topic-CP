/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
void solve(int a[], int n, int l, int r){
    int lcm=a[0];

    for(int i=1;i<n;i++){
        lcm=(lcm*a[i])/(__gcd(lcm,a[i]));
    }

    if(lcm<l and lcm*2>r || lcm>r){
        cout<<-1<<endl;
        return;
    }

    int k=(l/lcm)*lcm;
    // cout<<k<<endl;
    if(k<l)
    k=k+lcm;

    for(int i=k;i<=r;i=i+lcm)
    cout<<i<<" ";
    cout<<endl;

}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int l,r;cin>>l>>r;

    solve(a, n, l, r);
    return 0;
}

// time C.-> O(N)