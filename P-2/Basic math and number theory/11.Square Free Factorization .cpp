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
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int count =0;
        int maxi = 1;
        for(int i = 2; 1LL*i * i <= n; i++){
            count =0;
            while(n%i==0){
                n /= i;
                count++;
            }
            maxi = max(maxi , count);
        }
        cout << maxi << endl;
    }
    return 0;
}