#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1005;
int d[N][N],pref[N][N];
int main()
{
   // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m; cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cin>>d[i][j];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            pref[i][j]=pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1]+d[i][j];
            cout<<pref[i][j]<<" ";
        }
        cout<<'\n';
    }
    cout<<endl;

    int t;cin>>t;
    int ans=0;
     while(t--){
            int x1,x2,y1,y2; cin>>x1>>y1>>x2>>y2;
//     for(int i=x1;i<=x2;i++){
//        for(int j=y1;j<=y2;j++){
//            ans+=d[i][j];
//        }
//     }

  ans=pref[x2][y2]-pref[x1-1][y2]-pref[x2][y1-1]+pref[x1-1][y1-1];
     cout<<ans<<endl;
    }
    return 0;
}


