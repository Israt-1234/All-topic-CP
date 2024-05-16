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
        ll a[n+1];
        for(int i  = 1; i<= n; i++)
        cin>> a[i];
        bool ok = true;
        for(int i = 1; i<=min(n, 21); i++){
            int can_erage = false;
            for(int j = 1; j <= i ; j++ ){
            if(a[i] % (j+1) != 0){
                can_erage= true;
            }
        } 
        if(!can_erage){
            ok = false;
            break;
        }
        }
        if(ok)
        cout << "YES" <<endl;
        else
        cout << "NO" <<endl;

    }
    return 0;
}