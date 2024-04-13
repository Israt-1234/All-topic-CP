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
    int n;cin>>n;
    while(n--){
        int t;cin>>t;
        vector<int>v;
        if(t==1){
            cout<<0<<endl;
            continue;
        }
        v.push_back(1);
        for(int i=2;i*i<=t;i++){
            if(t%i==0){
                v.push_back(i);
                if(i!=t/i)
                v.push_back(t/i);
            }
        }
        ll sum=0;
        for(int it: v)
        sum+=it;
        cout<<sum<<endl;
    }
    return 0;
}


/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=500000;
//int d[N][N],pref[N][N];
int d[500000];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i)
        d[j]+=i;
    }
    int n;cin>>n;
    while(n--){
        int v;cin>>v;
        cout<<d[v]-v<<endl;
    }
    return 0;
}