#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int Max=1e6;
int cnt[Max+1];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        cnt[a[i]]++;
       // cout<<cnt[a[i]]++<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=cnt[i];j++){
            cout<<i<<" ";
        }
    }
    return 0;
}
