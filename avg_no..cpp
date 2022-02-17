/* Deepanshu Rohilla  20001001027 */
//program for average number
#include<stdio.h>
int main()
{
	int n,num,sum=0;
	float avg;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&num);
		sum = sum + num;
	}
	printf("The sum is %d\n",sum);
	avg = sum/(float)n;
	printf("The average value is %f",avg);
	
	return 0;
}
