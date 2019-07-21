/*swap a array to nor(size of array to rotate)
/reverse group name of queshion
8 
3 

1 2 3 4 5 6 7 8
ouptput
3 2 1 6 5 4 8 7
*/
#include<stdio.h>
void swap(int *a, int *b)
{
    //printf("%d %d ",*a,*b);
    int c;
    /**a=*a^*b;
    *b=*a^*b;
    *b=*b^*a;*/
    c=*a;
    *a=*b;
    *b=c;
    
}
int main()
{
    int n,nor;
    printf("Enter size of array\n");
    
    scanf("%d",&n);
    printf("Enter size of array to rotate\n");
    scanf("%d",&nor);
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i+=nor)
    {
        if(i+nor<n)
        {
            for(int j=0;j<nor/2;j++)
            {
                swap(&arr[i+j],&arr[i+nor-1-j]);
            }
        }
        else
        {
            for(int j=0;j<((n-i)/2);j++)
            {
                swap(&arr[i+j],&arr[n-1-j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
    
}