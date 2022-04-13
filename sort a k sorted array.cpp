#include<bits/stdc++.h>
using namespace std;

int sortK(int arr[], int n, int k)
{
   priority_queue<int, vector<int>, greater<int>> minh;
   int index=0;
   for(int i=0;i<n;i++)
   {
       minh.push(arr[i]);
       if(minh.size()>k)
       {
           arr[index++] = minh.top();
           minh.pop();
       }
   } 
   while(minh.size()>0)
       {
           arr[index++]=minh.top();
           minh.pop();
       }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
     int k = 3;
    int arr[] = { 2, 6, 3, 12, 56, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sortK(arr, n, k);
 
    cout << "Following is sorted array" << endl;
    printArray(arr, n);
 
    return 0;
}
