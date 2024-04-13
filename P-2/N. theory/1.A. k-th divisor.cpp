/*........Hard work and consistency is the only way to success........ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1005;
// int d[N][N],pref[N][N];
ll solution(ll n, ll k)
{
    set<ll> st;
    if (n == 1)
        st.insert(1);
    else if (n == 2)
    {
        st.insert(1);
        st.insert(2);
    }
    else
    {

        st.insert(1);
        st.insert(n);
        for (int i = 2;1LL* i * i <= n; i++)
        {
            if (n % i == 0)
            {
                st.insert(i);
                st.insert(n / i);
            }
        }
        
    }
    if (st.size() < k)
            return -1;
        else
        {
            ll count = 0;
            for (auto it : st)
            {
                count++;
                if (count == k)
                    return it;
            }
        }
        return -1;

}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    cout << solution(n, k) << endl;
    return 0;
}
//using vector

// /*........Hard work and consistency is the only way to success........ */
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 1005;
// // int d[N][N],pref[N][N];
// ll solution(ll n, ll k)
// {
//    vector<ll>st;
//     if (n == 1)
//         st.push_back(1);
//     else if (n == 2)
//     {
//         st.push_back(1);
//         st.push_back(2);
//     }
//     else
//     {

//         st.push_back(1);
//         st.push_back(n);
//         for (int i = 2;1LL* i * i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 st.push_back(i);
//                 if(i!=n/i)
//                 st.push_back(n / i);
//             }
//         }
        
//     }
//     sort(st.begin(),st.end());

//     if (st.size() < k)
//             return -1;
//     else 
//     return st[k-1];

// }
// int main()
// {
//     // clock_t st= clock();
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n, k;
//     cin >> n >> k;
//     cout << solution(n, k) << endl;
//     return 0;
// }
