#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;

   int a[100];
   int cumSum[100] = {0};
   int maximumSum=0;
   int currSum=0;

   int left =-1;
   int right = -1;

   cin>>a[0];
   cumSum[0] = a[0];
   for(int i=1; i<n;i++)
   {
      cin>>a[i];
      cumSum[i] = cumSum[i-1] + a[i];
   }

   // Generate all subarrays
   for(int i=0; i< n ;i++)
   {
      for(int j=i; j<n ;j++)
      {
            currSum = 0;

            currSum = cumSum[j] - cumSum[i-1];
          
            if(currSum> maximumSum){
                   maximumSum  = currSum;
                   left = i;
                   right = j;
            }
      }
   }
   // Print the maximumSum
   cout<<"maximum sum is " << maximumSum<<"\n";



}