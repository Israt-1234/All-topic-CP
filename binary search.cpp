#include<bits/stdc++.h>
#define ll long long
using namespace std;
//void bubble_sort(int a[], int n)
//{
////    int flag;
//    for(int i=0;i<n-1;i++){
////            flag=0;
//     for(int j=0;j<n-i-1;j++){
//        if(a[j]>a[j+1]){
//            swap(a[j],a[j+1]);
////           flag =1;
//        }
//     }
////     if(flag==0)
////        break;
//    }
//
//}

int binary_search(int a[], int n, int trg)
{
    int mid,l,r;
    l=0;r=n-1;
    while(l<=r){
    mid=(l+r)/2;
    if(trg==a[mid])
        return mid;
    else if(trg>a[mid]){
        l=mid+1;
    }
    else
        r=mid-1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int trg; cin>>trg;
//    bubble_sort(a,n);
//    for(int i=0;i<n;i++)
//        cout<<a[i]<<" ";
     sort(a,a+n);
    int result= binary_search(a,n,trg);
    if(result==-1)
        cout<<"data is not found"<<'\n';
    else
        cout<<"data is found"<<" " <<a[result]<<' '<<result<<'\n';

        return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int n,int tgt)
{
    int l,r,mid;
    l=0;
    r=n-1;
    while(l<=r)
    {
         mid=(l+r)/2;
        if(tgt==a[mid])
        {
            return mid;
        }
        else if(tgt>a[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
return -1;
}

int main()
{
    int  n, a[100],i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int tgt;
    cin>>tgt;
    int result=binarysearch(a,n,tgt);
    if(result==-1)
    {
        cout<<"element is not found"<<endl;
    }
    else
  {
      cout<<result<<endl;
  }
}
*/
