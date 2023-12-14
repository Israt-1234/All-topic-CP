/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string k;
    int t;
    cin >> t;
    while(t--){
        int len;
        cin >> len;
        string str;
        cin >> str;
        bool isEveryone = true;
        for(int i = 0; i < len - 1; i++){
            if(str[i] == '1' && isEveryone == true){
                cout << "IDK" << endl;
            }
            else{
                cout << "NO" << endl;
                isEveryone = false;
            }
        }
        if(str[len - 1] == '1' && isEveryone == true) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}