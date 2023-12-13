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
    int n ;cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    cin>>a[i];
    int sum=0;
    for(int i=1;i<=n;i++){
        if((i*(n-i+1))%2==1)
        sum^=a[i];
    }
    cout<<sum<<endl;
    return 0;
}