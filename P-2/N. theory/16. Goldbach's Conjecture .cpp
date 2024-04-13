/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+9;
//int d[N][N],pref[N][N];
//int is_prime[N];
bitset<N>is_prime;
void seive(){
    is_prime[1]=false;
    for(int i=2;i<N;i++)
    is_prime[i]=true;

    for(int i=2;i*i<N;i++){
        if(is_prime[i]){
            for(int j=i*i;j<N;j+=i)
            is_prime[j]=false;
        }
    }
}

int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    seive();
    vector<int>prime;
    for(int i=1;i<N;i++){
        if(is_prime[i])
        prime.push_back(i);
    }
    int t;cin>>t;
    int cnt=0;
    while(t--){
        cnt++;
        int ans=0;
        int n;cin>>n;
    for(auto a:prime){
        if(a>n) break;
        int b=n-a;
        if(is_prime[b] and a<=b){
            ans+=1;
        }
      }
      cout<<"Case "<<cnt<<": "<<ans<<endl;
    }
    return 0;
}