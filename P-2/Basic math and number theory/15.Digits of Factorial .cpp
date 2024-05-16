/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+9;
//int d[N][N],pref[N][N];
double p[N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 1; i<N; i++){
        p[i]=p[i-1]+log2(i);
    }
    int n; cin>>n;
    int count = 0;
    while(n--){
        ll a, b;
        cin>> a >> b;
        double digit = 0;
        // for(int i = 1; i <= a; i++){
        //     digit += log2(i)/log2(b);
        // }
        // digit = digit+1;


        // for(int i = 1; i <= a; i++){
        //     digit += log2(i);
        // }
        // digit = digit/log2(b)+1;
        digit = p[a];
        digit = digit / log2(b) +1;
       cout << "Case "<< ++count <<": ";
       cout <<(int) floor(digit) <<endl;
    }
    return 0;
}