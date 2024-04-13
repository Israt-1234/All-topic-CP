/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+7;
//int d[N][N],pref[N][N];
bool is_prime[N];
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

}

int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    seive();
    while(n--){
       ll x;cin>>x;
        int p=sqrtl(x);
        while(1LL*p*p<x) p++;
        while(1LL*p*p>x) p--;
       // cout<<p<<endl;
        if(1LL*p*p==x){
            if(is_prime[p])
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
       //  cout<<is_prime[2]<<endl;

    }
    return 0;
}