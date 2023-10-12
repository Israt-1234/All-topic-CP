#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+9;
int a[N],n;
ll s;
int mono(int mid)
{
   ll sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+(a[i]/mid);
    }
    return sum>=s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     cin>>n>>s;

     for(int i=1;i<=n;i++)
        cin>>a[i];
     int l=1;
     int r=n;
     int ans=-1;
     int mid;
     while(l<=r){
        mid=(l+r)/2;
        if(mono(mid)){
                ans=mid;
            l=mid+1;
        }
        else
            r= mid-1;

     }
     cout<<ans<<" and "<<a[ans]<<endl;
     return 0;

}
