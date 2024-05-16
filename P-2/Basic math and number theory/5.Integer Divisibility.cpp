//Runtime error code 
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
          string A = to_string(b);
         // cout << A <<endl;
        for(int i = 0; i < A.size() ; i++){
            if(stoll(A) % a == 0){
                break;
            }
            else{
                 A = A+to_string(b);
                // cout << A <<endl;  
            }
        }
       // cout << A <<endl;
        cout << A.size() <<endl;
    }
    return 0;
}