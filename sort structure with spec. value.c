#include<stdio.h>
#include<string.h>
struct student
{
  int rollno;
  char name[20];
  
};
int comparator(const *a,const *b)
{
    int l=*(int *)a;
    int r=*(int *)b;
    return l-r;
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    char c1;
    
    struct student arr[n];
    //to scan records
    for(i=0;i<n;i++)
    {
         scanf("%s",arr[i].name);
        // scanf("%c",&c1);
        scanf("%d",&arr[i].rollno);
       
        
    }
    //before sorting
    for(i=0;i<n;i++)
    {
        printf("%d %s \n",arr[i].rollno,arr[i].name);
    }
    qsort((void *)arr,(sizeof(arr)/sizeof(arr[0])),sizeof(arr[0]),comparator);
    //after sorting with rollno
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d %s \n",arr[i].rollno,arr[i].name);
    }
    
    
}