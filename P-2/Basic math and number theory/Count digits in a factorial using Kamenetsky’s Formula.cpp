//We can use Kamenetsky’s formula to find our answer
//n! = 5! = 120 = 3digit

/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int findDigit( int n){
    if(n==0)
    return 0;
    if(n<=1)
    return 1;

    double x = ((n*log10(n/M_E)+ log10(2*M_PI*n)/2.0));
    return floor(x)+1;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;

   cout<<"Number of digits of "<< n<< "! is "<<findDigit(n) << endl;
    return 0;
}

//Time complexity: O(logn)