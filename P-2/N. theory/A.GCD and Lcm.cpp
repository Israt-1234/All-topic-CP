/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int GCD(int a,int b){
    if(a>b) swap(a,b);
    if(a==0) return b;
    else
    return GCD(b%a,a);
}

int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    while(n--){
        ll a,b;cin>>a>>b;
        // ll gcd=__gcd(a,b);
        // ll lcm=(a*b)/gcd;

        int gcd=GCD(a,b);
        ll lcm=(1LL*a*b)/gcd;

        cout<<gcd<<' '<<lcm<<endl;
    }
    return 0;
}