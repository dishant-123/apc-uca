//1 1 1 1 1 2 2 2 3 3 4 5 in input
//4 5 only in output 
#include<stdio.h>
int main()
{
	int i,j=0;
	int n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)	scanf("%d",&arr[i]);
	 
	 
	for(i=1;i<n;i++)
	{
		if(arr[i]!=arr[j])
		//{
			if(j+1!=i )
			{
				if(arr[0] || arr[j-1]!=arr[i]){
					arr[j]=arr[i];
					j++;
				}
				else j--;
				
			}
			else j++;
			/*if(j+1!=i)
			{
				printf("%d ",arr[i]);
				arr[j]=arr[i];
				j++;
			}
			else j++;*/
		}
		else printf("i=%d ",arr[i]);
	}
	//for(i=0;i<j;i++)
	//	printf("%d ",arr[i]);
}
