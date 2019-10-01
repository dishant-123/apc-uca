#include<stdio.h>
void left_rotate(int *arr,int s,int e,int ll)
{
	int c=0,t,i;
	
	if(ll>=(e-s))
	{
		ll=ll%(e-s);
	}
	while(c<ll)//(e-s)%ll))
	{
		t=arr[e-1];
		c++;
		for(i=e-2;i>=s;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[0]=t;
	}

}
void right_rotate(int *arr,int s,int e, int rr)
{
	int c=0,t,i;
	
	if(rr>=(e-s))
	{
		rr=rr%(e-s);
	}
	while(c<rr)
	{
		c++;
		t=arr[s];
		for(i=s+1;i<e;i++)
		{
			arr[i-1]=arr[i];
		}
		arr[e-1]=t;
	}
}
int main()
{
	int n,i,r,rr,n1,n2,ll;
	printf("Enter size of array \n");
	scanf("%d",&n);
	int *arr=(int *)malloc(sizeof(int)*n);
	printf("Enter array Elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number of left operation you wanna perform \n");
	scanf("%d",&ll);
	printf("Enter number of right operation you wanna perform \n");
	scanf("%d",&rr);
	n1=n/2;
	right_rotate(arr,n1,n,rr);
	left_rotate(arr,0,n1,ll);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
