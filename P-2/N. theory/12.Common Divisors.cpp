/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long

//int d[N][N],pref[N][N];
vector<int>v;
int divi(ll N){
    
    for(int i=1;1LL*i*i<=N;i++){
        if(N%i==0){
            v.push_back(i);
            if(i!=N/i)
            v.push_back(N/i);
        }
    }
   return v.size();
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>k;
    ll t;cin>>t;
    ll gcd=0;
    while(t--){
     ll n;cin>>n;
        gcd=__gcd(gcd,n);
       
    }
     int cnt=divi(gcd);
    cout<<cnt<<endl;
    return 0;
}