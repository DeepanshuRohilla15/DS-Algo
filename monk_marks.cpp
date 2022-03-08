#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   map<int, vector<string>> m;
   while(t--)
   {
       int ma;
       string s;
       cin>>s>>ma;
       m[ma].push_back(s);
   }
    for(auto i = m.rbegin();i!=m.rend();i++)
       {
           sort(i->second.begin(),i->second.end());
           for(int j=0;j<i->second.size();j++)
           {
               cout<<i->second[j]<<" "<<i->first<<"\n";
           }
       }
 

}