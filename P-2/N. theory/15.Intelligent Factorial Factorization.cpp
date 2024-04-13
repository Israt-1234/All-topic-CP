/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
bool is_prime(int n){
    if(n==1) return false;
    for(int i=2;i<n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;cin>>t;
   int cnt=0;
   while(t--){
     int n;cin>>n;
    
    int x=n;
      cout<<"Case "<<++cnt<<": "<<x<<" = ";
    int div=0;
    for(int p=1;p<=n;p++){
        if(is_prime(p)){
            int exponent=0;
    for(int i=1;i<=n;i++){
        int x=i;
            while(x%p==0){
            exponent++;
                x/=p;
            }
        }
       if(p!=2) cout<<" * ";
        cout<<p<<" ("<<exponent<<")";
      }
    }
    cout<<endl;
   }
    
    return 0;
}