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
    int n; cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);
     int sum=0;
    for(int i=1;i<=n;i++){
     for(int j=i+1;j<=n;j++)
     sum+=(a[j]-a[i])*(1<<(j-i-1));
    }
    cout<<sum<<endl;
    return 0;
}