/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+9,M=1e6;
//int d[N][N],pref[N][N];
int cnt[N],mul[N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        cnt[x]++;
    }
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
          mul[i]+=cnt[j];
        }
    }
    for(int i=1;i<=M;i++)
    cout<<mul[i]<<" ";
    cout<<endl;
    
    return 0;
}