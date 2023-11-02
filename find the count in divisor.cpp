//1 to n divisor
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int n=5;
 int d[n];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    for(int i=1;i<n;i++){
        for(int j=i;j<n;j+=i){
            d[j]++;
            cout<<d[j]<<"d"<<endl;
        }
    }
        for(int i=1;i<n;i++)
    cout<<d[i]<<endl;
    return 0;

}
