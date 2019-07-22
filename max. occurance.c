#include<stdio.h>
int main()
{
    int n,max,prev=0,m=0,p=-1;
    printf("size of both left and right array\n");
    scanf("%d",&n);
    int *l=(int *)malloc(n*sizeof(int));
    int *r=(int *)malloc(n*sizeof(int));
    printf("enter left array element\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
    }
    printf("enter right array element\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&r[i]);
    }
    max=r[0];
    for(int i=1;i<n;i++)
    {
        if(r[i]>max)
        {
            max=r[i];
        }
        
    }
    //printf("%d",max);
    int *arr=(int *)malloc(sizeof(int)*(max+1));
    //printf("%d",*(arr+0));
    for(int i=0;i<n;i++)
    {
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    for(int i=0;i<max+1;i++)
    {
        if(arr[i]+prev>m)
        {
            m=m+arr[i];
            p=i;
        }
        prev+=arr[i];
    }
    printf("\n max ocurance %d \n ",m);
    printf(" which leement has maximum occurance%d",p);
    
    
    
}