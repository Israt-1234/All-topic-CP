//brute forces

/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
bool f[N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<int>v;
    f[1]=true;
    for(int i=2;i<=n;i++){
        if(!f[i]){
            v.push_back(i);
            for(int j=i+i;j<=n;j+=i){
                f[j]=true;
            }
        }
    }
    for(auto x:v)
    cout<<x<<" ";
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

const int N = 1e8 + 9;
bitset<N> f;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n = N - 9;
  vector<int> primes;
  f[1] = true;
  for (int i = 2; i * i <= n; i++) {
    if (!f[i]) {
      for (int j = i * i; j <= n; j += i) {
        f[j] = true;
      }
    }
  }
  for (int i = 2; i <= n; i++) {
    if (!f[i]) {
      primes.push_back(i);
    }
  }
  cout << primes.size() << '\n';
  return 0;
}