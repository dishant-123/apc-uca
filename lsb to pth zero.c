//lsb to ith position convert all bit to zero
#include<stdio.h>
int main()
{
	int n,p,x;
	printf("Enter theb number \n");
	scanf("%d",&n);
	printf("Enter the position \n");
	scanf("%d",&p);
	x=~((1<<p+1)-1);
	n=n&x;
	printf("%d",n);
	//mask = ~((1 << i+1 ) - 1);
	//x &= mask;
}c