#include<bits/stdc++.h>
using namespace std;
#define ll long long

//void insertion_sort(int a[],int n)
//{
//    int temp,j;
//    for(int i=1;i<n;i++){
//        temp=a[i];
//        j=i-1;
//       while(j>=0 and a[j]>temp){
//            a[j+1]=a[j];
//            j--;
//        }
//        a[j+1]=temp;
//    }
//}

void insertion_sort ( int A[ ] , int n)
{
     for( int i = 0 ;i < n ; i++ ) {

      int temp = A[ i ];
      int j = i;

          while(  j > 0  && temp < A[ j -1]) {
                A[ j ] = A[ j-1];
                j= j - 1;

           }
           A[ j ] = temp;
     }
}
void printsort(int a[], int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    insertion_sort(a,n);
    printsort( a, n);
//       for(int i=0;i<n;i++)
//        cout<<a[i]<<" ";
     cout<<endl;
}
