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
    ll x, y;
     cin>> x >> y;
     double log_x = y*log(x);
     double log_y = x*log(y);
     if(log_x > log_y)
     cout << ">"<<endl;
     else if(log_x<log_y)
     cout << "<" <<endl;
     else
     cout << "="<<endl;

    return 0;
}