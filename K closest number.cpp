#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]= {5,6,7,8,9};
    int size =5;
    int x = 7;
    int k =3;
   
     priority_queue<pair<int,int>> maxh;
    for(int i=0; i<size;i++)
    {
       maxh.push({abs(arr[i]-x),arr[i]});
       if(maxh.size()>k)
       {
           maxh.pop();
       }
    }
    while(maxh.size()>0)
    {
        cout<<maxh.top().second<<" ";
        maxh.pop();
    }
}