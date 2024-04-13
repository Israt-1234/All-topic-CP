/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+9;
//int d[N][N],pref[N][N];
int spf[N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=2;i<N;i++)
    spf[i]=i;

    for(int i=2;i<N;i++){
   if(spf[i]==i){
    for(int j=i;j<N;j+=i)
    spf[j]=min(spf[j],i);
   }
 }
 int x;
 while(cin>>x and x!=0){
    int distric_prime=0;
    int k=x;
    while(x>1){
        distric_prime++;
        int p=spf[x];
        while(x%p==0)
        x/=p;
       
    }
     cout<<k<<" : "<<distric_prime<<endl;

 }
    return 0;
}