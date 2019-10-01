/*hotel problem
input
no of person=3
(1,2),(3,6),(5,9)
 |  \
arri departure time
val
time 
no of rooms=2
output
room available or not
*/

#include<stdio.h>
struct Hotel
{
    int arrt;
    int dept;
};
int comparator(const *a,const *b)
{
       int l=((struct Hotel *)a)->arrt;
       int r=((struct Hotel *)b)->arrt;
       return l-r;
       
}
int main()
{
    int n,no_of_rooms,p=0;
    struct Hotel *st=(struct Hotel *)malloc(n*sizeof(struct Hotel));
    printf("no of persons \n");
    scanf("%d",&n);
    printf("no of rooms available \n");
    scanf("%d",&no_of_rooms);
    printf("Print arr and dept times resp.\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&st[i].arrt,&st[i].dept);
    }
    qsort((void *)st,sizeof(st)/sizeof(st[0]),sizeof(st[0]),comparator);
    for(int i=0;i<n;i++)
    {
        if(((st[i+1].arrt-st[i].dept)>0))
        {
            
        }
        else
        {
            //no_of_rooms-=(st[i+1].arrt-st[i].dept);
                if(no_of_rooms-1<=0)
                {
                    p=1;
                    break;
                }
        }
        
    }
    if(p==1)
        printf("no rooms available");
    else
        printf("rooms allocated to all");
    
    
}





2.




/*hotel problem
input
no of person=3
(1,2),(3,6),(5,9)
 |  \
arri departure time
val
time 
no of rooms=2
output
room available or not
*/
#include<stdio.h>

struct Hotel
{
    int arrt;
    int dept;
};
int comparator(const *a,const *b)
{
       int l=((struct Hotel *)a)->arrt;
       int r=((struct Hotel *)b)->arrt;
       return l-r;
       
}
int main()
{
    int n,no_of_rooms,p=0;
    struct Hotel *st=(struct Hotel *)malloc(n*sizeof(struct Hotel));
    printf("no of persons \n");
    scanf("%d",&n);
    printf("no of rooms available \n");
    scanf("%d",&no_of_rooms);
    printf("Print arr and dept times resp.\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&st[i].arrt,&st[i].dept);
    }
    qsort((void *)st,sizeof(st)/sizeof(st[0]),sizeof(st[0]),comparator);
    //1 person room alote
    for(int i=1;i<n;i++)
    {
        no_of_rooms-=1;
        if(st[i].arrt-st[p].dept>0 && no_of_rooms>0)
        {
            no_of_rooms++;
            //i++;
        }
        else
        {
            st[i].dept=st[i].dept>st[p].dept?st[i].dept:st[p].dept;
            r=r+2;
            n--;
            i--;
        }
        
    }
    
    
}