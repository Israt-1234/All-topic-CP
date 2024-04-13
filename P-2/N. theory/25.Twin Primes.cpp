/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e7+9;
//int d[N][N],pref[N][N];
int is_prime[N]; 
vector<int>prime;
void seive(){
    is_prime[1]=false;
    for(int i=2;i<N;i++)
     is_prime[i]=true;

     for(int i=2;1LL*i*i<N;i++){
        if(is_prime[i]){
            for(int j=i+i;j<N;j+=i){
                is_prime[j]=false;
            }
        }
     }
     for(int i=2;i<N;i++){
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

    vector<pair<int,int>>twin_p;
    for(int i=1;i+2<N;i++){
        if(is_prime[i] and is_prime[i+2]){
            twin_p.push_back(make_pair(i,i+2));
        }
    }
    int n;
    while (cin>>n)
    {
        cout<<"("<<twin_p[n-1].first<<", "<<twin_p[n-1].second<<")"<<endl;
    }
    
    //  while(cin>>n){
    //    int count =0;
    // for(int i=1;i<prime.size();i++){
    //        if(prime[i]-prime[i-1]==2){
    //         count++;
    //         if(count==n){
    //         cout<<prime[i-1]<<" "<<prime[i]<<endl;
    //         break;
    //         }
    //        }
    //    } 
    // }
    return 0;
}