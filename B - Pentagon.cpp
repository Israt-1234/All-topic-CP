/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1005;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  string s,t;cin>>s>>t;
  if(s=="AB" || s=="BA"|| s== "BC" || s=="CB" || s=="CD"|| s=="DC" || s=="DE"|| s=="ED"|| s=="AE"||s=="EA" ){
    if(t=="AB" || t=="BA"|| t== "BC" || t=="CB" || t=="CD"|| t=="DC" || t=="DE"|| t=="ED" ||  t=="AE"||t=="EA")
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
  }
  else{
     if(t=="AB" || t=="BA"|| t== "BC" || t=="CB" || t=="CD"|| t=="DC" || t=="DE"|| t=="ED" ||  t=="AE"||t=="EA")
     cout<<"No"<<endl;
     else
     cout<<"Yes"<<endl;
  }

    return 0;
}
