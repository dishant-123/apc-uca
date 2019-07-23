// unique element
// 1 1 1 2 2 2 2 3 3 3 4 4 5 6
//   1 2 3 4 5 6
#include<stdio.h>
int main()
{
    int n,p=0,j=0;
    printf("size of array \n");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("array element\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    // complexity is more in this
    /*for(int i=1;i<n;i++)
    {
        if(arr[p]!=arr[i])
        {
            p=i;
        }
        else
        {
            arr[i]=NULL;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=NULL)
            printf("%d ",arr[i]);
    }*/
    //right solution
    for(int i=1;i<n;i++)
    {
        if(arr[j]!=arr[i])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    for(int i=0;i<=j;i++)
    {
        printf("%d ",arr[i]);
    }
}