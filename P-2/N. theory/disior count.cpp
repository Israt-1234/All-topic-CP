//Find the number of divisors for all integers from 1 to n
/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int d[105];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=10;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i)
      //  d[j]++;
        d[j]+=i ;  //for sum of divisior
    }
    for(int i=1;i<=n;i++)
    cout<<d[i]<<" ";
    return 0;
}
