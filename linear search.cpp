#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        int trg,count =0; cin>>trg;
    for(int i=0;i<n;i++){
        if(a[i]==trg){
            cout<<"the index is: "<<i<<" "<<"the value is :"<<a[i]<<endl;
            count++;
            break;
        }
    }
    if(count==0) cout<<"the data is not found"<<'\n';
    return 0;
}
