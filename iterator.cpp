#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,3,4,5,6};
    /*for(int i=0;i<v.size();i++)  Method 1 to prinyt vector
    {
        printf("%d\t",v[i]);
    }
    printf("\n");*/

   /* vector<int> ::iterator it=v.begin();   //Method 2
    for(it = v.begin();it!=v.end();++it)
    {
        printf("%d\n",*it);
    }*/

    for(int value: v)                  //Method 3
    {
        printf("%d\n",value);
    }
    
}