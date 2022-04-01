#include<bits/stdc++.h>
using namespace std;

int first(int arr[],int low,int high, int ele,int n)
{
    int res=-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(ele == arr[mid])
        {
             res = mid;
            high = mid-1;
        }
        else if(ele<arr[mid])
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return res;
}

int last(int arr[],int low,int high, int ele,int n)
{
    int res=-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(ele == arr[mid])
        {
             res = mid;
            low = mid+1;
        }
        else if(ele<arr[mid])
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return res;
}

int main()
{
   int arr[] = {2,4,10,10,10,18,20};
   int n= sizeof(arr)/sizeof(int);
   int ele = 10;
   printf("First Occ=%d\n",first(arr,0,n-1,ele,n));
   printf("Second Occ=%d\n",last(arr,0,n-1,ele,n));
   
}