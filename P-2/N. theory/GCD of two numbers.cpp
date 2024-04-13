/*Given two numbers ‘a’ and 
‘b’ such that (0 <= a <= 10^12 and b <= b < 10^250). Find the
 GCD of two given numbers.*/
/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
// uint64_t solution(uint64_t a, uint64_t b){
//     if(a==0) return b;
//     if(b==0) return a;
//     if(a<b) swap(a,b);
//     return solution(a%b,b);

// } 
ll gcd(ll a, ll b){
    if(a==0) return b;
    return gcd (b%a, a);
}
ll reduceB(ll a, char b[]){
    ll mod=0;
    for(int i=0;i<strlen(b);i++)
    mod=(mod*10+b[i]-'0')%a;
     
    return mod;
}
ll gcd_large(ll a, char b[]){
    ll num=reduceB(a,b);
    return gcd(a,num);
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    uint64_t a,b;cin>>a>>b;
     ll a=1221;
     char b[]="1234567891011121314151617181920212223242526272829"; // Second number (string)
     if(a==0)
     cout<<b<<endl;
     else
   cout<< gcd_large(a,b)<<endl;
    return 0;
}