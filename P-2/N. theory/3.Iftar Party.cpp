// P=c*Q+L   find Q??
//c*Q=p-L   so Q | p-L  divisor

/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    int cn=0;
    while(t--){
        int p,L;cin>>p>>L;
        int n=p-L;
        vector<int>v;
        for(int Q=1;1LL*Q*Q<=n;Q++){
           if(n%Q==0){
            if(L<Q)
            v.push_back(Q);
           
           if(Q!=n/Q and L<n/Q)
           v.push_back(n/Q);
           }
        }
        sort(v.begin(),v.end());
        cout<<"Case "<<++cn<<": ";
        if(v.empty())
        cout<<"impossible"<<endl;
        else{
            for(auto it:v){
                cout<<it<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
