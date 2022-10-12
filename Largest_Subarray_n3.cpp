#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;

   int a[100];
   int maximumSum=0;
   int currSum=0;

   int left =-1;
   int right = -1;


   for(int i=0; i<n;i++)
   {
      cin>>a[i];
   }

   // Generate all subarrays
   for(int i=0; i< n ;i++)
   {
      for(int j=i; j<n ;j++)
      {
            currSum = 0;
            for(int k=i; k<=j; k++)
            {
                currSum += a[k];
            }
            if(currSum> maximumSum){
                   maximumSum  = currSum;
                   left = i;
                   right = j;
            }
      }
   }
   // Print the maximumSum
   cout<<"maximum sum is " << maximumSum<<"\n";

   // Print the subarray
   for(int k=left; k<=right; k++)
   {
      cout<<a[k]<<",";
   }

}