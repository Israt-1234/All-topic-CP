#include<bits/stdc++.h>
using namespace std;
//using ll=long long
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1e5+9;
int a[N];
//int d[N][N],pref[N][N];
struct ds{
  multiset<int>se;
  ds(){}
   void insert1(int x){
   se.insert(x);
   }
   void erase1(int x){
   se.erase(se.find(x));
   }
   int get_max(){
   return *(--se.end());
   }

};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n ,k; cin>>n>>k;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  for(int i=1;i<=n;i++){
    Ds.insert1(a[i]);
    if(i>=k){
        cout<<Ds.get_max()<<" ";
        Ds.erase1(a[i-k+1]);
    }
  }
  return 0;
}
