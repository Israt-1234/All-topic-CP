/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+9;
bool is_prime[N];
vector<int>prime;

void seive(){
    is_prime[1]=false;
    for(int i=2;i<N;i++)
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
    int count=1;
    while(t--){
        ll n;cin>>n;
        // int div=1;
        // for(int i=2;1LL*i*i<=n;i++){
        //    if(n%i==0){
        //     div++;
        //     if(i!=n/i)
        //     div++;
        //    }
        // }
        int divisor=1;
        for(auto p:prime){
            if(1LL*p*p>n) break;
            int power=0;
            while(n%p==0){
                power++;
                n/=p;
            }
            divisor*=(power+1);
        }
        if(n>1){
        int power=1;
        divisor*=(power+1);
        }
        cout<<"Case "<<count<<": "<<divisor-1<<endl;
        count++;
    }
    return 0;
}