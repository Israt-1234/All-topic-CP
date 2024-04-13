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
    if(n%2==0){
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++)
        cout<<2<<" ";
        cout<<endl;
    }
    else{
        cout<<n/2<<endl;
        for(int i=1;i<n/2;i++)
        cout<<2<<" ";
        cout<<3<<endl;
    }
    return 0;
}