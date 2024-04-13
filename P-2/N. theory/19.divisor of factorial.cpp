/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e4+9 ,mod=1e9+7;
//int d[N][N],pref[N][N];
bool is_prime[N];
vector<int>prime;

void seive(){
    is_prime[1]=false;
    for(int i=2;i<N;i++)
    is_prime[i]=true;

    for(int i=2;i<N;i++){
        if(is_prime[i]){
            for(int j=i+i;j<N;j+=i){
                is_prime[j]=false;
            }
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
    while(t--){
        int n;cin>>n;
        int divisor=1;
        for(auto p:prime){
         int ex=0;
         if(p>n)break;

         for(int i=p;i<=n;i+=p){
            int x=i;
                while(x%p==0){
                    ex++;
                    x/=p;
                }
         }
       divisor=1LL*divisor*(ex+1)%mod;
        }
        cout<<divisor<<endl;
    }
    return 0;
}