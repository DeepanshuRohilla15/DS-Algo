#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
       map<long long,long long> mp;
       for(int i=0;i<n;i++)
       {
           long long x;
           cin>>x;
           mp[x]=1;
       }
       for(int i=0;i<m;i++)
       {
           long long x;
           cin>>x;
           if(mp[x]!=1)
           {
               cout<<"NO"<<"\n";
               mp[x]=1;
           } 
           else{
                cout<<"YES"<<"\n";
           }
       }



    }
}