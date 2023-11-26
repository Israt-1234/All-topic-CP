#include<bits/stdc++.h>
using namespace std;
//using ll=long long
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1e5+9;
int a[N];
//int d[N][N],pref[N][N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n ,k; cin>>n>>k;
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  int sum=0;
  for(int i=1;i<=n;i++){
    sum+=a[i];
    if(i>=k){
        cout<<sum<<endl;
        sum-=a[i-k+1];
    }
  }
  return 0;
}
