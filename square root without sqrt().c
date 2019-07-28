//square root without sqrt()

#include<stdio.h>
int binary_sort(int s,int e,int n)
{
	int mid;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(mid*mid == n)
		{
			return mid;
		}
		else if(mid*mid > n)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	return e;
}
int main()
{
	int n,start=0,end,mid;
	printf("Enter the number whose square to be find \n");
	scanf("%d",&n);
	end=n-1;
	int r=binary_sort(0,n-1,n);
	printf("%d is square of %d",r,n);
	
	
}
