/*........Hard work and consistency is the only way to success........ */
//how many digit in n!
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int factorial(int n){
    if(n<=0)
    return 1;
    int fact = 1;
    for(int i =1 ; i <= n; i++){
        fact = fact*i;
    }
    return fact;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    ll fact = factorial(n);

    int c =0;
    while(fact!=0){
        fact/=10;
        c +=1;
    }
    cout<<"Number of digits of "<< n<< "! is "<<c<<endl;
    return 0;
}


//Time complexity: O(n)