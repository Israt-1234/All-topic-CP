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
    ll n;cin>>n;
    ll x=sqrtl(n);
    while(x*x<n) ++x;
    while(x*x>n)  --x;
    
    // assert(x*x==n);

    int ans=0;
    for(int p=2;p*p<=x;p++){
        if(x%p==0){
            ans=max(ans,p);
            while(x%p==0){
                x/=p;
            }
        }   
    }
    if(x>1){
        ans= max (ans, (int)x);
    }
    cout<<ans<<endl;
    return 0;
}