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
     int c = 0;
    while(t--){
      cout << "Case "<< ++c <<": ";
        ll a , b;
        cin >> a >> b;
          int i =1;
          int cur = 0;
        for( i = 1; ; i++){
          cur = ((cur * 10) + b) % a;
          if(cur == 0)
          break;
        }
       int len = i;
        cout << len <<endl;
    }
    return 0;
}