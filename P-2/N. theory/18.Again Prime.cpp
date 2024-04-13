/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e4+9;
//int d[N][N],pref[N][N];
bool is_prime[N];
vector<int>prime;
void seive(){
    is_prime[1]=false;
    for(int i=2;i<=N;i++)
    is_prime[i]=true;

    for(int i=2;i<N;i++){
        if(is_prime[i]){
            for(int j=i+i;j<N;j+=i)
            is_prime[j]=false;
        }
    }
    for(int i=1;i<N;i++){
        if(is_prime[i])
        prime.push_back(i);
    }
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    seive();
    int t;cin>>t;
   int cnt=0;
    while(t--){
        int m,n;cin>>m>>n;
          int ans=1e9;
        for(int p:prime){
           
            if(p>m) break;
            if(m%p==0){
                int e=0;
                while(m%p==0){
                 m/=p;
                 ++e;
                
                }
                int exponent=0;
                for(int i=1;i<=n;i++){
                    int x=i;
                    while(x%p==0){
                        exponent++;
                        x/=p;
                    }
                }
                ans=min(ans, exponent/e);
              
            }
        }
        if(ans==0)
         cout<<"Case "<<++cnt<<":\n"<<"Impossible to divide"<<endl;
        else
        cout<<"Case "<<++cnt<<":\n"<<ans<<endl;
    }
    return 0;
}