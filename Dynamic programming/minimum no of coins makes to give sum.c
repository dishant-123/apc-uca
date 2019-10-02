#include<stdio.h>
int min(int a,int b)
{
	if(a<=b)
		return a;
	return b;
}
int calcMinCoins(int coins[],int value,int size)
{
	int arr[size][value+1];
	int i,j;
	for(i=0;i<=value;i++)
		arr[0][i]=i;
	for(i=1;i<size;i++)
	{
		for(j=0;j<=value;j++)
		{
			if(j==0)
				arr[i][j]=0;
			else if(j<coins[i-1])
			{
				arr[i][j]=arr[i-1][j];
			}
			else 
			{
				arr[i][j]=min((arr[i][j-coins[i-1]])+1 , arr[i-1][j]);
					
			}
		}
	}
	return arr[size-1][value];
}
int main()
{
	int coins[4]={1,5,2,2};// 4 coins of value 1,2,3,4.
	int value;
	scanf("%d",&value);
	printf("%d ",calcMinCoins(coins,value,4));
}
