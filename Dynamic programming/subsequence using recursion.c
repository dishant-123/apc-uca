#include<stdio.h>
int max(int a,int b)
{
	if(a>=b)
		return a;
	return b;
}
int LCS(char str1[],char str2[],int i,int j)
{
   if(str1[i]=='\0' || str2[i]=='\0')
	return 0;
   else if(str1[i]==str2[j])
       return 1+LCS(str1,str2,i+1,j+1); 
   else
	return max(LCS(str1,str2,i+1,j),LCS(str1,str2,i,j+1)); 
}
int main()
{
   char str1[10]="abcd";
   char str2[4]="bd";
   printf("%d",LCS(str1,str2,0,0));
}
