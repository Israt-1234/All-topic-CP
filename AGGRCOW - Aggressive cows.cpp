#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+9;
int b,k;
int a[N];
int search(int x)
{
    int sum=a[1];
    int count=1;
    for(int i=2;i<=b;i++){
//            cout<<a[i]<<" ";
//    cout<<endl;
        if(a[i]-sum>=x){
            count++;
            sum=a[i];
        }
    }
    return count>=k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    while(n--){
       cin>>b>>k;
       for(int i=1;i<=b;i++){
        cin>>a[i];
       }
       int count=0;
        sort(a+1, a+b+1);
        int l=1 , r=1e9;
        int ans=0,mid;
        while(l<=r){
                mid=l+(r-l)/2;
        if(search(mid)){
            ans=mid;
            l=mid+1;
           }
        else
            r=mid-1;

        }
        cout<<ans<<endl;
    }
        return 0;
}
