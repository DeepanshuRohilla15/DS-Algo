#include<iostream>
using namespace std;

int main()
{
      int n;
      cin>>n;
      int currSum=0;
      int maxSum=0;

      int a[100];
      for(int i=0; i<n;i++)
      {
            cin>>a[i];
      }

      for(int i=0; i<n; i++)
      {
            currSum = currSum + a[i];
            if(currSum < 0)
            {
                  currSum =0;
            }
            maxSum = max(maxSum,currSum);
      }
      cout<<"Maximum sum is "<<maxSum<<"\n";

}