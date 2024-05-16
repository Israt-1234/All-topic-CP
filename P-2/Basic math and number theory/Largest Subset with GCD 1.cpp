/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int gcd(int a, int b){
    if(a > b) swap(a , b);
    if(a==0)
     return b;
     return gcd(b%a , a);
}
int largestGCDsubset (int a[], int n){
    int currentGCD = a[0];
    for(int i = 1 ; i < n ; i++){
        currentGCD = gcd(currentGCD , a[i]);
        if(currentGCD == 1 )
        return n;

    }
    return 0;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int a[n];
    for(int i=0 ; i < n ; i++)
    cin >> a[i];

    cout << largestGCDsubset(a , n) << endl;
    return 0;
}