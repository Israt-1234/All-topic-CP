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
    int c=0;
    while (t--){
        cout << "Case " << ++c <<": ";
        ll w ; cin >> w;
        if(w % 2 != 0)
        cout << "Impossible" <<endl;
        else{
            ll m = 1;
            while(w % 2 == 0){
                m *= 2;
                w /= 2;
            }
            ll n = w;
            cout<< n << ' ' << m << endl;
        }
    }
    return 0;
}