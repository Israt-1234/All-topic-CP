/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll Max=1e18;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   vector<ll>v;
   ll p2=1;
   for(int i=0;p2<=Max;i++, p2*=2){
    //p2=2^x
    ll p3=1;
    for(int j=0;p2*p3<=Max;j++,p3*=3){
        //p3=3^j
        ll p5=1;
        for(int z=0;p2*p3*p5<=Max;z++,p5*=5)
        v.push_back(p2*p3*p5);
    }    
   }

   sort(v.begin(),v.end());
   cout<<"The 1500'th ugly number is "<<v[1500-1]<<".\n";
   
    return 0;
}