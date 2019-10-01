// unique element but minimum 2 can exist
// 1 1 1 2 2 2 2 3 3 3 4 4 5 6
// 1 1 2 2 3 3 4 4 5 6
#include<stdio.h>
int main()
{
    int n,j=0;
    printf("size of array \n");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("array element\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1] && arr[i]==arr[i+2] && i<n-2)
        {
            continue;
        }
        else
        {
            //printf("a %d ",arr[i]);
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<j;i++)
    {
        printf("%d ",arr[i]);
    }
}