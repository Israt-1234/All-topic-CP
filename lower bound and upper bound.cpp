#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lower_bound(vector<int>v, int trg)
{
    int l ,r, mid;
    l=0; r=v.size()-1;
    while(l<r){
        mid= (l+r)/2;
        if(v[mid]<trg)
            l=mid+1;
            else
            r=mid;
    }
    if(v[l]>=trg)
        return l;
    if(v[r]>=trg)
        return r;

    return -1;
}
int upper_bound(vector<int>v,int trg)
{
    int l,r,mid;
    l=0;r=v.size()-1;
    while(l<r){
        mid=(l+r)/2;
        if(v[mid]<=trg)
            l=mid+1;
        else
            r=mid;
    }
    if(v[l]>trg)
        return l;
    if(v[r]>trg)
        return r;

    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

        cout<<"sorted value: ";
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
       cout<<v[i]<<" ";
       cout<<endl;

    int trg; cin>>trg;
    int result =lower_bound(v, trg);
    if(result==-1)
        cout<<" value is not found "<<result<<'\n';
        else
            cout<<"index is: "<<result<<" "<<"the value of : "<<v[result]<<endl;

int result1 =upper_bound(v, trg);
    if(result1==-1)
        cout<<" value is not found "<<result1<<'\n';
        else
            cout<<"index is: "<<result1<<" "<<"the value of : "<<v[result1]<<endl;
}
