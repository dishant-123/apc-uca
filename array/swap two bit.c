#include<stdio.h>
int main()
{
	int n,p1,p2;
	scanf("%d %d %d",&n,&p1,&p2);
	if((((1<<(p1-1)&n)) && !(1<<(p2-1)&n)) || ((!(1<<(p1-1)&n)) && (1<<(p2-1)&n)))
	{
		n=n^(1<<(p1-1));
		n=n^(1<<(p2-1));
	}
	printf("%d",n);
}
