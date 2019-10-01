#include<stdio.h>
int binary(int *arr,int start,int end,int f)
{
	int mid;
	while(start<=end)
	{
		mid=(start+end)/2;
		//printf("p=%d \n",mid);
		if(f==arr[mid])
		{
		
		    return mid;
		}
		else if(f<arr[mid])
		{
		
			end=mid-1;
		}
		else
		{
		
			start=mid+1;
		}
	}
	return -1;
}
int main()
{
	int n,k,s,r,i;
	printf("Enter size of array \n");
	scanf("%d",&n);
	printf("Array Element \n");
	//int *arr=(int *)(malloc(sizeof(int)*n));
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("no to find \n");
	scanf("%d",&k);	
	for( i=0;i<n;i++)
	{
		s=k+arr[i];
		//printf("%d",s);
		r=binary(arr,0,n-1,s);
		printf("r=%d \n",r);
	}
		if(r!=-1)
		{
			
			printf("no is found at position %d \n",r);
		}
		else
		{
			printf("no is not found \n");
		}
	
}

