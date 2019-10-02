#include<stdio.h>
#include<stdlib.h>
int min(int a,int b)
{
	if(a<=b)
		return a;
	return b;
}
int main()
{
	int n;
	scanf("%d",&n);//size of array.
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int res[n],j;
	res[0]=0;
	for(i=1;i<n;i++)
	{
		res[i]=INT_MAX;
		for(j=0;j<i;j++)
		{
			if(j+arr[j]>=i && arr[j]!=INT_MAX)//so that if there is no path to arr[j] we can't add it.
			{
				res[i]=min(res[i],res[j]+1);
				break;
			}
		}
	}
	for(i=0;i<n;i++)	printf("%d ",res[i]);
}
