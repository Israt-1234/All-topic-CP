/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int GCD(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a<b) swap(a,b);
    // return GCD(a-b, b);
    return GCD(a%b, b);
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<GCD(10,15)<<"  ";
    return 0;
}