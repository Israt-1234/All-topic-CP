/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6;
//int d[N][N],pref[N][N];
int d[N+9];
int ok[N+9];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 1; i <= N; i++){
        for(int j = i; j <= N; j+=i){
            d[j]++;
        }
    }
    for(int n= 1; n<=N;n++){
        ok[n]=true;
    }
    for(int m = 1; m<=N; m++){
        for(int n = m; n<=N;n+=m){
            if(d[n]%d[m]!=0)
             ok[n]= false;
        }
    }
    vector<int>ans;
    for(int n =1; n<=N;n++){
        if(d[n]>3 and ok[n])
        ans.push_back(n);
    }
    for(int i =107 ;i<ans.size(); i+=108){
        cout <<ans[i]<<endl;
    }
    return 0;
}