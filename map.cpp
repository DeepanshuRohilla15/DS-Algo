#include<bits/stdc++.h>
using namespace std;

// function of print map
void print(map<int, string> &m)
{
    cout<<"Size "<<m.size()<<"\n";
     for(auto &pr : m)
    {
        cout<< pr.first<<" "<<pr.second<<"\n";
    }
} 
int main()
{
    map<int, string> m;
    m[1]= "abc";
    m[5]= "cde";
    m[2]= "def";
    m.insert({4,"vbh"});

   
}