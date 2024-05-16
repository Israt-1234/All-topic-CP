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

   while(t--){
    ll n ; cin >> n;
    ll a[n];
    ll sum=0;
    string s = "";
    for( int i = 0; i < n; i++){
        cin >> a[i];
        s += to_string(a[i]);
    }
   // cout<<s<<endl;
     for( int i = 0; i < s.size() ; i++){
         sum+=s[i]-'0';
     }
     //cout<<sum<<endl;
     if(sum % 3 == 0)
     cout << "Yes" <<endl;
     else
     cout << "No" <<endl;
   }
    return 0;
}
