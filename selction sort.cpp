#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        int min_index=i;
        for(int j=i+1;j<=n;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
        swap(a[i],a[min_index]);
    }
   for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
   cout<<endl;
   return 0;
}
