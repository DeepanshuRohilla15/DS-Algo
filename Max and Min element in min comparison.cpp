#include<bits/stdc++.h>
using namespace std;

int getresult(int arr[],int n)
{
	int min=0,max=0;
	if(n==1) min = max = arr[0];
	if(arr[0]>arr[1])
	{
		max = arr[0];
		min = arr[1];
	}
	else if(arr[0]<arr[1])
	{
		max= arr[1];
		min = arr[0];
	}
	for(int i=2;i<n;i++)
	{
		if(arr[i]>max)
		{
			max =arr[i];
		}
		else if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	printf("Minimum element:%d\n",min);
	printf("Maximum element:%d",max);
}
int main()
{
	int arr[]={11,222,100,-45,-46,300};
	int n = 6;
	getresult(arr,n);
	return 0;
}
