/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+3;
int a[N]; int fre[N];
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int ans = 0;
   
    for(int i = 0 ;i < n; i++){
    cin>>a[i];
    fre[a[i]]++;
    }

    for(int i = 2; i<N ;i++){
        int count = 0;
        // for(int j = 0 ; j<n;j++){
        // if(a[j] % i == 0){
        //     count++;
        // }
        for(int g = i; g < N; g+=i){
           count += fre[g];
        }        
        ans = max(ans, count);
    }
    cout << max(ans, 1) <<endl;
    return 0;
}

