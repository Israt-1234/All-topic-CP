// How to find all the prime factors of  n in O(root(n))

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
    int n;cin>>n;
    vector<int>v;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while (n%i==0)
            {
                v.push_back(i);
                n/=i;
            }           
        }        
    }
    if(n>1)
    v.push_back(n);
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}