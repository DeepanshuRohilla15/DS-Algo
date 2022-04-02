#include<bits/stdc++.h>
using namespace std;

int Bs(int arr[], int l, int r, int x)
{
    if(l<=r)
    {
        int mid = l+(r-l)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        if((mid-1)>=l && arr[mid-1]==x) return (mid-1);
        if((mid+1)<=r && arr[mid+1]==x) return (mid+1);
        if(arr[mid]>x) return Bs(arr,l,mid-2,x);

        return Bs(arr, mid+2, r, x);  
    }
    return -1;
}

int main()
{
    int arr[]={3,2,10,4,40};
    int n = sizeof(arr)/sizeof(int);
    int x = 40;
    int res = Bs(arr,0,n-1,x);
    if(res == -1) printf("Not present");
    else{
        printf("Element index is %d",res);
    } 
    return 0;  
}