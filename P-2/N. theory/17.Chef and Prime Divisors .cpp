/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        while(1){
            ll gcd=__gcd(a,b);
            if(gcd==1) break;
             b=b/gcd;

        }
        if(b==1)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}