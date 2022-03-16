#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={4,5,2,10,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    vector<int> v;
    stack<int> s;
    for(int i=0;i<size;i++)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()<arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>= arr[i])
        {
            while(s.size()>0 && s.top()>= arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }  
}