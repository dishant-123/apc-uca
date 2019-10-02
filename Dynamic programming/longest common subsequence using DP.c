#include<stdio.h>
int max(int a,int b)
{
	if(a>=b)
		return a;
	return b;s
}
int caclSubSequence(char X[],char Y[],int m,int n)
{
	char LCS[m+1][n+1];
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
				if(j==0 || i==0)
					LCS[i][j]=0;
				else if(X[i-1]==Y[j-1])
				{
					LCS[i][j]=LCS[i-1][j-1]+1;
				}
				else
				{
					LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
					//LCS[i][j]=LCS[i-1][j-1];
				}
		}
	}
	i=m;
	j=n;
	int index=LCS[m][n];
	char ans[index];//length of longest subsequence.
	int ansLen=index;
	//printf("%d\n",index);
	while(i>0 && j>0)
	{
		if(LCS[i-1][j]==LCS[i][j-1])
		{
			ans[--index]=Y[j-1];
			i--;
			j--;
			//index-=1;
		}
		else if(LCS[i-1][j]>LCS[i][j-1])
		{
			i--;
		}
		else
			j--;
	}
	printf("YIPEE!! longest common subsequence is find \n");
	for(i=0;i<ansLen;i++)
	{
		printf("%c",ans[i]);
	}
	printf("\n");
	return LCS[m][n];
}
int main()
{
	char X[]="ABCDEF";
	char Y[]="CDE";
	int m=strlen(X);
	int n=strlen(Y);
	int ans=caclSubSequence(X,Y,m,n);
	printf("%d",ans);
}
