#include<bits/stdc++.h>
using namespace std;
#define ll long long
int sumof(int n)
{
    int sum=0;
    while(n){

        sum+=n%10;
   // cout<<" sum "<<sum<<endl;
        n/=10;
     //   cout<<" n "<<n<<endl;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k; cin>>k;
    int count=0;
    for(int i=19;i<=1e9;i+=9){
        if(sumof(i)==10){
            count++;
            if(count==k){
                cout<<i<<'\n';
                break;
            }
        }
    }
  return 0;
}
