/*4
(1,3),(5,8),(2,6),(11,13)
output
(1,8),(11,13)
*/
#include<stdio.h>
#include<string.h>
struct student
{
  int start;
  int end;
  
};
int comparator(const *a,const *b)
{
    int l=((struct student *)a)->start;
    int r=((struct student *)b)->start;
    
    return l-r;
}
void merge(struct student *arr,int *s)
{
        for(int j=0;j<*s;j++)
        {
            if(arr[j].end>=arr[j+1].start)
            {
                int max=arr[j].end>arr[j+1].end?arr[j].end:arr[j+1].end;
                arr[j].end=max;
               // arr[j].start=arr[j].start;
                for(int k=j+1;k<*s;k++)
                {
                    arr[k].start=arr[k+1].start;
                    arr[k].end=arr[k+1].end;
                }
                *s=*s-1;
                 j--;
            }
        }
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    struct student arr[n];
    //to scan records
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i].start);
        scanf("%d",&arr[i].end);
    }
    int s1=(sizeof(arr)/sizeof(arr[0]));
   
    qsort((void *)arr,(sizeof(arr)/sizeof(arr[0])),sizeof(arr[0]),comparator);
    
    merge((void *)arr,&s1);
    for(i=0;i<s1;i++)
    {
        printf("%d %d \n",arr[i].start,arr[i].end);
    }
    //printf("\n");
    return 0;
    
    
}