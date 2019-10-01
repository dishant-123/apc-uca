//1 1 1 1 0 0 1 1 0 1 m=2(no of zeroes flip)
//output = 8 
#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)	scanf("%d",&arr[i]);//only zeroes and one's
	scanf("%d",&m);
	int noOfZeroes=0,wL=0,wR=0,maxWindow=0,bestL,bestR=0;
	while(wR<n)
	{
		if(noOfZeroes<=m)
		{
			if(arr[wR]==0)
				noOfZeroes++;
			wR++;
		}
		if(noOfZeroes>m)
		{
			if(arr[wL]==0)
				noOfZeroes--;
			wL++;
		}
		if(noOfZeroes<=m && wR-wL>maxWindow){
			maxWindow=wR-wL;
			bestL=wL;
			bestR=wR;
		}
		
	}
	printf("max window size = %d ",maxWindow);
	printf("\nposition where zeroes flip to get maximum subarray. \n");
	for(i=bestL;i<bestR;i++)
	{
		if(arr[i]==0)
			printf("%d ",i);
			
	}
}
