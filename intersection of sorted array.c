#include<stdio.h>
int main()
{
	int n,i=0,j=0,k=0,m;
	printf("Enter size of array 1 \n");
	scanf("%d",&m);
	printf("Array Element 1 \n");
	//int *arr=(int *)(malloc(sizeof(int)*n));
	int arr1[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter size of array 2 \n");
	scanf("%d",&n);
	printf("Array Element 2 \n");
	//int *arr=(int *)(malloc(sizeof(int)*n));
	int arr2[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	i=0,j=0;
	int arr3[m+n];
	while(i<m && j<n)
	{
		if(arr1[i]<arr2[j])
		{
		
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
		
			j++;
		}
		else
		{
			arr3[k]=arr1[i];
			i++;
			j++;
			k++;
					
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",arr3[i]);
	}
	
}
