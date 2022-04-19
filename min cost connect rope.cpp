#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    priority_queue<int, vector<int>,greater<int>>minh;
   
    for(int i=0;i<n;i++)
    {
        minh.push(arr[i]);
    }
    int cost=0;
    while(minh.size()>=2)
    {
        int first = minh.top();
        minh.pop();
        int second = minh.top();
        minh.pop();

        cost = cost + first+ second;
        minh.push(first+second);
    }
     cout<<cost;

}