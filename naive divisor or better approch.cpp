//time O(n)
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int n;
//    cin>>n;
//    vector<int>divisors;
//    for(int i=1;i<=n;i++){
//        if(n%i==0){
//            divisors.push_back(i);
//        }
//    }
//  for(int i=0;i<divisors.size();i++)
//    cout<<divisors[i]<<endl;
//}

//better approch
//time O(sqrt(n))
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   // int n=100;
   ll n=1e12;
    vector<ll>v;
    for(int i=1; 1LL*i*i<=n; i++)  //i<=sqrt(n)
    {
        // cout<<i<<" "<<n/i;
//     if(i!=n)
//        cout<<" ";
  if(n%i==0){
        v.push_back(i);
     if(i!=n/i)   v.push_back(n/i);
      }
    }
    sort(v.begin(),v.end());
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;

}














