/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
bool is_prime(int n){
    if(n==1) return false;
    for(int i = 2 ; 1LL * i * i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    if(is_prime(n))
    cout << 1 <<endl;
    else if(n%2 == 0)
    cout << 2 << endl;
    else
{   
    if(is_prime(n-2))
    cout << 2 <<endl;
    else
     cout << 3 << endl;
}    return 0;
}