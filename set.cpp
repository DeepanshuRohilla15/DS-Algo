#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for(string value: s)
    {
        cout<<value<<"\n";
    }
}

int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ghj");
    print(s);

}