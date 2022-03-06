#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int min= *min_element(v.begin(),v.end());
    cout<<min<<"\n";
    int max = *max_element(v.begin(),v.end());
    cout<<max<<"\n";
    int sum= accumulate(v.begin(),v.end(),0);
    cout<<sum<<"\n";
    int ct = count(v.begin(),v.end(),6);
    cout<<ct<<"\n";
    auto it = find(v.begin(),v.end(),2);
    if(it!= v.end()) cout<< *it <<"\n";
    else  cout<<"Not Found\n";

    reverse(v.begin(),v.end());
    for(auto val: v)
    {
        cout<<val<<" ";
    }
    cout<<"\n";

    string s = "abcdefghj";
    reverse(s.begin(),s.end());
    cout<<s<<"\n";
}