/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int convert_to_decimal(string b){
    int decimal = 0;
     for(int i = 0 ; i<b.size(); i++){
        int ch = b[i]-'0';
        decimal=(decimal*2)+ch;
     } 
     return decimal;
}
bool inCheking(int a, int b, int c, int d, string s){
    string A = s.substr(0, 8);
    // int convert = convert_to_decimal(A);
    if( convert_to_decimal(A)!=a)
    return false;

    string B = s.substr(9, 8);
    //  convert = convert_to_decimal(B);
    if( convert_to_decimal(B)!=b)
    return false;

    string C = s.substr(18, 8);
    //  convert = convert_to_decimal(C);
    if( convert_to_decimal(C)!=c)
    return false;

    string D = s.substr(27, 8);
    //  convert = convert_to_decimal(D);
    if( convert_to_decimal(D)!=d)
    return false;

  return true;
}

int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    int C = 0;
    while(t--){
        cout<<"Case "<<++C<<": ";
    char dot ;
    int a, b, c, d;
     cin>> a >> dot >> b >> dot >> c >> dot >>d;
     string s;
     cin >> s;
      if(inCheking(a, b, c, d, s))
      cout << "Yes" <<'\n';
      else
      cout << "No" <<'\n';
    }
    return 0;
}