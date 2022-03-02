#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<< v[i]<<" ";
    }
}*/
 void printVec(vector<pair<int,int>> &v)
 {
     for(int i=0;i<v.size();i++)
     {
         cout<<v[i].first <<" "<<v[i].second<<"\n";
     }
     cout<<"\n";
 }
int main()
{
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>> x >>y;
        v.push_back({x,y});
    }
    printVec(v);

}