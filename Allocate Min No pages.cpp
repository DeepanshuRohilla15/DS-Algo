#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n)
{
    return *max_element(arr,arr+n);
}

bool isValid(int arr[],int n,int m,int curr_min)
{
    int student =1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]> curr_min)
        {
            return false;
        }
        sum = sum+ arr[i];
        if(sum> curr_min)
        {
            student++;
            sum = arr[i];
        }
        if(student> m)  return false;
    }
    return true;
}

// function to find minimum pages
int findPages(int arr[],int n,int m)
{
    long long sum=0;

    //return -1 if no. of books is less than students
    if(n<m) return -1;

    // Count total no of pages-> used for end
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    int start = largest(arr,n);
    int end = sum;
    int res=-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(isValid(arr,n,m,mid))
        {
            res = mid;
            end = end-1;
        }
        else{
            start = mid+1;
        }
    }
    return res;
}

int main()
{
    int arr[]={12,34,67,90}; // no of pages in book
    int n = sizeof(arr)/sizeof(arr[0]);
    int m=2; // no. of students
    cout<<"Minimum number of pages = "<<findPages(arr,n,m)<<"\n";
    return 0;

}