/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<int>v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0)
        v.push_back(i);
        if(i!=n/i)
        v.push_back(n/i);
    }
    for(auto x:v){
        cout<<x*x<<" ";
    }
    return 0;
}