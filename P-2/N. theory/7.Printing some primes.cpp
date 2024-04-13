/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e8;
//int d[N][N],pref[N][N];
bitset<N> is_prime;
void seive(){
   is_prime[1]=false;
   for(int i=2;i<N;i++)
   is_prime[i]=true;

   for(int i=2; i*i<N;i++){
    if(is_prime[i]){
        for(int j=i+i;j<N;j+=i){
            is_prime[j]=false;
        }
    }
   }
   
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    seive();
    vector<int>primes;
    for(int i=2;i<N;i++){
        if(is_prime[i])
        primes.push_back(i);
    }
    for(int i=0;i<primes.size();i+=100)
    cout<<primes[i]<<endl;
    return 0;
}

/*

//sphere online  judge
#include<bits/stdc++.h>
using namespace std;
const int N=1e8;
vector<bool>is_prime(N, true);
vector<int>prime;
 
void seive(int N)
{
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i*i<=N;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=N;j+=i){
               is_prime[j]=false;
            }
        }
    }
    
    for(int i=2;i<=N;i++){
        if(is_prime[i])
           prime.push_back(i);
    }
   for(int i=0;i<prime.size();i+=100){
    cout<<prime[i]<<endl;
   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
   seive(N);
   return 0;
}
 
*/