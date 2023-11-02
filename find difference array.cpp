#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int n=5;
 int d[n];
 int a[n];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        d[i]=a[i]-a[i-1];
    }
    for(int i=1;i<=n;i++)
        cout<<d[i]<<" ";
    cout<<endl;
    return 0;
}
