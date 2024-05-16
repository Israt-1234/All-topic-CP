// tle 
// brute forces

/*........Hard work and consistency is the only way to success........ */
/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
        int count =0;
         int d, n;
         cin>> d >> n;
         ll a[n];
         for(int i =0; i < n; i++){
            cin >> a[i];
         }
         for(int i =0; i < n ;i++){
              for(int j=i; j < n; j++){
                ll sum = 0;
                   for(int k = i; k <= j; k++){
                      sum += a[k];
                   }
                   if(sum % d == 0)
                   count ++ ;
              }
         }
         cout << count << endl;
     }
    return 0;
}
*/


/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e4+9;
//int d[N][N],pref[N][N];
ll a[N];
ll prefix[N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
     cin>>t;
     while(t--){
         int d, n;
         cin>> d >> n;
        
         for(int i =1; i <= n; i++){
            cin >> a[i];
         }
         prefix[0]=0;
         for(int i = 1 ; i <= n; i++){
            prefix[i] = prefix[i-1] + a[i];
         }
        // ll count = 0;
        //  for(int l = 0; l < n; l++){
        //     for(int r = l; r < n; r++){
        //        ll sum = prefix[r] - prefix[l-1];
        //        if(sum % d == 0)
        //        count ++;
        //     }
        //  }
        //  cout << count << endl;
        ll ans = 0;
        unordered_map<int , int > cnt;
        cnt[prefix[0]%d]++;
        for(int r = 1 ; r <= n; r++){
           ans += cnt[prefix[r]%d];
           cnt[prefix[r]%d]++;
        }
        cout<< ans <<endl;
     }
    return 0;
}