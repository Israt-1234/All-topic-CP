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
    string a;int b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<a.size();i++){
        ans=((ans*10)+(a[i]-'0'))%b;
    }
    cout<<ans<<endl;
    if(ans==0)
    cout<<"yes a is divisible by b\n";
    else
    cout<<"very sad"<<endl;
    return 0;
}