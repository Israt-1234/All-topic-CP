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
    int count = 0;
    while (t--){
       
        int p , q;
        cin >> p >> q;
        int a[p];
        for(int i = 0 ; i < p; i++){
            cin >> a[i];
        }
    ll sum = 0;
    for(int i = 0; i < p; i++){
        sum += 1LL * a[i]*(p - 2*i - 1);
    }
     cout << "Case "<< ++count <<":\n";
      while(q--){
          int ty; cin >> ty;
          if(ty == 1){
            cout << sum <<"\n";
          }
          else{
            int i, x;
            cin >> i >> x;
            sum -= 1LL*a[i]*(p - 2*i - 1);
            a[i]=x;
            sum +=1LL* a[i]*(p - 2*i - 1);
          }
      }       
    }
    return 0;
}