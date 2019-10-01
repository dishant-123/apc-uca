#include<stdio.h>
#include<string.h>
//max(j-1);
//a[j]>a[i];
struct student
{
  int rollno;
  int index;
  
};
int comparator(const *p,const *q)
{
    //int l=*(int *)p;
    //int r=*(int *)q;
    int l=((struct student*)p)->rollno;
    int r=((struct student*)q)->rollno;
    return l-r;
    //return l-r;
      
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    
    struct student arr[n];
    //to scan records
    for(i=0;i<n;i++)
    {
         scanf("%d",&arr[i].rollno);
        // scanf("%c",&c1);
        arr[i].index=i;
       
        
    }
    //before sorting
    for(i=0;i<n;i++)
    {
        printf("%d %d \n",arr[i].rollno,arr[i].index);
    }
    qsort((void *)arr,(sizeof(arr)/sizeof(arr[0])),sizeof(arr[0]),comparator);
    //after sorting with rollno
    printf("\n");
    int arr1[n],min,max=0;
    for(i=0;i<n;i++)
    {
        printf("%d %d \n",arr[i].rollno,arr[i].index);
        arr1[i]=arr[i].index;
        
    }
    min=arr1[0];
    for(i=1;i<n;i++)
    {
        if(arr1[i]-min>max)
        {
            max=arr1[i]-min;
        }
        min=(arr1[i]<min?arr1[i]:min);
    }
    printf("maximum difference is %d",max);
    
    
}
