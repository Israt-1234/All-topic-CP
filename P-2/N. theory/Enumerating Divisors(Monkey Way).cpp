// How to enumerate(gonona) the divisors of n in O(n)?
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
    
    for(int i=1;i<=n;i++){
        if(n%i==0)
        cout<<i<<" ";
    }
    return 0;
}

