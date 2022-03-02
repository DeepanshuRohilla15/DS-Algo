#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int> > v_p={{1,2},{2,3},{3,4}};
    vector<pair<int, int> >::iterator it;

    for(it = v_p.begin();it!=v_p.end();++it) // Method 1
    {
        printf("%d %d\n",(*it).first,(*it).second);
    }
    for(it = v_p.begin();it!=v_p.end();++it)  //Method 2
    {
        printf("%d %d\n",it->first,it->second);
    }
    return 0;
}