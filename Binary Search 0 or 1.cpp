#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int l=1,r=n;
    int ans=-1,mid;
    //print index in first occarns in 1
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==1){
            ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;

    }
    cout<<ans<<endl;
    return 0;
}
