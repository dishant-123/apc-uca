//1 1 2 2 4 6 4 3 3  7
//output is 6 7
//any positive and negative number
//o(n) complexity
#include<stdio.h>
int main()
{
	int n,x=0,i,x1=0,x2=0;
	scanf("%d",&n);
	int *arr=(int *)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		x=x^arr[i];
	}
	//printf("%d\n",x);
	x=x&(-x); //for shift the number to first one's(0110=0010)
	//printf("%d\n",x);
	for(i=0;i<n;i++)
	{
		if((x&arr[i])==0)
		{
			x1=x1^arr[i];
		}
		else
		{
			x2=x2^arr[i];
		}
	}
	printf("%d %d ",x1,x2);
	//return 0;
}
