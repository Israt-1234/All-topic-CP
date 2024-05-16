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
    while(t--){
        string a; int b; cin>>a>>b;
        if(a[0] == '-')
        a.erase(a.begin());

        b = abs(b);
        int ans = 0;
        for(auto it : a){
           int d = it - '0';
           ans = ((1LL*ans * 10 )%b + d) % b;

        }
        cout << "Case " << ++count << ": ";
        if(ans == 0)
        cout << "divisible\n";
        else
        cout << "not divisible\n";
    }
    return 0;
}