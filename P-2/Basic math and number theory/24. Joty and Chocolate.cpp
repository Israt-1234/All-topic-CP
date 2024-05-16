/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
ll lcm(int a, int b){
    return ((1LL*a*b)/__gcd(a, b));
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, p, q; cin >> n >> a >> b >> p >> q;
    int red = n/a;
    int blue = n/b;
    ll both = n/lcm(a, b);
    if(p>q){
       blue -=both;
    }
    else{
        red -=both;
    }
    cout << 1LL*red*p + 1LL*blue*q <<endl;
    return 0;
}