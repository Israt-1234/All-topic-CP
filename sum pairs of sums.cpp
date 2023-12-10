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
    int sum=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         sum+=a[i]+a[j];
    //     }
    // }
    for(int i=0;i<n;i++){
        sum+=2*n*a[i];
    }
    cout<<sum<<endl;
    return 0;
}