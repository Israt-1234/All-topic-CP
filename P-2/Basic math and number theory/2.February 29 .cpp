/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int is_leap_year( int year){
    bool ok= false;
    if(year%4==0){
        ok=true;
        if(year%100== 0){
            ok=false;
            if(year%400 == 0)
            ok=true;
        }
    }
    return ok;
}
int count_leap_year_brute(int year, int year1){
    int count =0;
    for(int i =year ; i<= year1; i++){
        count+=is_leap_year(i);
        // if(is_leap_year(i))
        // i+=3;
    }
    return count;
}
int count_l_prefix(int year){
    int ans=year/4;
    ans-=year/100;
    ans+=year/400;
    return ans;
}
int count_leap_year(int year, int year1){
   return count_l_prefix(year1) - count_l_prefix(year-1);
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int count =0;
    while(n--){
        string start_month;
        int date, year;
        cin>>start_month >> date;
        char dummy; cin>> dummy ;
        cin >> year;

        string end_month;
        int date1, year1;
        cin>> end_month >> date1;
        char dummy1; cin>> dummy1;
        cin >> year1;
        
    if(start_month=="January" or start_month=="February"){

    }
    else{
        year++;
    }
    if(end_month == "January" or (end_month == "February" and date1 < 29)){
        year1--;
    }
    
    cout<<"Case "<<++count <<": "<< count_leap_year(year, year1)<<'\n';

    }
    return 0;
}