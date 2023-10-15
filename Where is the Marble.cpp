#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=10009;
int n,k,tar;
int a[N];
int ans;
void binary_search(int l, int r){
    int mid;
   if(l<=r)
   {
       mid=(l+r)/2;
       if(a[mid]==tar) ans =mid;
      if(tar<=a[mid]) binary_search(l, mid-1);
       else
        binary_search(mid+1, r);
   }
   else return ;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
  int t=0;
   while( cin>>n>>k){
        if(n==0 && k==0)
        break;
    for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        t=t+1;
 cout<<"Case# "<<t<<":"<<endl;
   while(k--){
        cin>>tar;
    ans=-1;
    binary_search(0, n-1);

     if(ans<0)  cout<<tar<<" not found"<<endl;
     else  cout<<tar<< " at found "<<ans+1<<'\n';

   }

   }

}
