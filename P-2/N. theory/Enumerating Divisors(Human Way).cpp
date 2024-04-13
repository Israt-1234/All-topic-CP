 // How to enumerate the divisors of n in O(root(n))
//using set
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
    set<int>st;
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
        st.insert(i);
        st.insert(n/i);
        }
    }
    for(auto x:st)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}

// using vector
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
    vector<int>v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0)
        v.push_back(i);
        if(i!=n/i)
        v.push_back(n/i);
    }
    sort(v.begin(),v.end());
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}