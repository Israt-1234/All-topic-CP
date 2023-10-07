#include<bits/stdc++.h>
#define ll long long
using namespace std;
void bubble_sort(int a[], int n)
{
    int flag;
    for(int i=0;i<n-1;i++){
            flag =0;
        for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
             flag=1;
          }
        }
        if(flag==0)
            break;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a[n];
      for(int i=0;i<n;i++)
        cin>>a[i];
        bubble_sort(a,n);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
}

