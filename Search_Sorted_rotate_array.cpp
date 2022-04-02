#include<bits/stdc++.h>
using namespace std;

int Bs(int arr[],int l, int r,int key)
{
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(key == arr[mid])
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            r = mid-1;
        }
        else{
            l= mid+1;
        }
    }
    return -1;
}
int pivot(int arr[], int n)
{
    int low=0, high= n-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        int prev = (mid-1+n)%n;
        int next = (mid+1)%n;
        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
        {
            return mid;
        }
        else if(arr[mid]<=arr[high])
        {
            high = mid-1;
        }
        else if(arr[mid]>= arr[low])
        {
            low = mid+1;
        }
    }
    return 0;
}
int main(){
    int arr[] = {11,12,15,18,2,5,6,8};
    int n = sizeof(arr)/sizeof(int);
    int key = 15;
    int index = pivot(arr, n);
    int fhalf = Bs(arr,0,index-1,key);
    int shalf = Bs(arr, index, n-1, key);
    if(fhalf==-1 && shalf ==-1)
    {
        cout<<"-1";
    } 
    if(fhalf>=0 || shalf<0) cout<<fhalf<<"\n";
    else{
        cout<<shalf<<"\n";
    } 
}   

