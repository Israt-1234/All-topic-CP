/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+7;
//int d[N][N],pref[N][N];
int spf[N];
int solution(int x, int n){
   for(int i=2;i<N;i++)
   spf[i]=i;
   vector<int>v;
   for(int i=2;i<N;i++){
    for(int j=i;j<N;j+=i){
        spf[j]=min(spf[j],i);
       // cout<<spf[j]<<" "<<j<<endl;
    }
   }
   
  return 0;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=0;i<n;i++){
    int x;
    cin>>x;
    solution(x, n);
    cout<<spf[x]<<" "; 
    int gfp=0;
    int distance_prime_factor=0;
    int total_prime_factor=0;
    int number_of_divisors=1;
    int power_of_k=0;
    int sum_of_divisor=0;
    while(x>1){
        int p=spf[x];   
        gfp=max(gfp, p);
        distance_prime_factor++;
        while(x%p==0){
            ++power_of_k;
            x/=p;
        }
        number_of_divisors*=power_of_k+1;
        x/=p;

    }

    cout<<gfp<<" ";
    cout<<distance_prime_factor<<" ";
    cout<<total_prime_factor<<" ";
    cout<<number_of_divisors<<" ";
    cout<<endl;  
    }
    return 0;
}









// /*........Hard work and consistency is the only way to success........ */
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N=1e6+7;
// //int d[N][N],pref[N][N];
// int spf[N];
// int solution(int x, int n){
//    for(int i=2;i<N;i++)
//    spf[i]=i;
//    vector<int>v;
//    for(int i=2;i<N;i++){
//     for(int j=i;j<N;j+=i){
//         spf[j]=min(spf[j],i);
//        // cout<<spf[j]<<" "<<j<<endl;
//     }
//    }
   
//   return 0;
// }
// int main()
// {
//     // clock_t st= clock();
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;cin>>n;
//     for(int i=0;i<n;i++){
//     int x;
//     cin>>x;
//     solution(x, n);
//     cout<<spf[x]<<" "; 
//     int gfp=0;
//     set<int>factor;
//     int count =0;
//    int x1=x;
//     while(x>1){
//         int k=spf[x];
//         factor.insert(k);
//         gfp=max(gfp,k);
//         x/=k;
//         count++;
//     }
//     vector<int>v;
//     cout<<gfp<<' '<<factor.size()<<" "<<count<<" ";
//     for(int i=1;1LL*i*i<=x1;i++){
//         if(x1%i==0){
//             v.push_back(i);
//             if(i!=x1/i){
//             v.push_back(x1/i);
//             }
//         }
//     }
//     cout<<v.size()<<" ";
//     int sum=0;
//     for(auto it:v){
//        sum+=it;
//     }
//        cout<<sum<<endl;
//     }  
//     return 0;
// }