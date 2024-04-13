/*Given an integer n and a prime number p, find the 
largest x such that px (p raised to power x) divides n! (factorial) */

/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int largestPower(int n, int p){
   int x=0;
    while(n!=0){
        n/=p;
       // cout<<n<<endl;
        x+=n;
        //cout<<x<<endl;
    }
    return x;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=10,p=3;
    cout<<largestPower(n,p)<<endl;
    return 0;
}