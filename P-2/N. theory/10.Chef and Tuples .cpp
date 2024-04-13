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
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        vector<int>div;
        for(int i=1;1LL*i*i<=n;i++){
            if(n%i==0){
                div.push_back(i);
                if(i!=n/i)
                div.push_back(n/i);
            }
        }
         int res=0;
        for(auto x:div){
            if(x<=a){
                for(auto y:div){
                    if(y<=b){
                        if(n%(1LL*x*y)==0){
                            int z=n/(x*y);
                            if(z<=c)
                            res++;
                        }
                    }
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}