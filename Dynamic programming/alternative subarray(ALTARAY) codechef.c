/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int i,*arr=(int *)malloc(sizeof(int)*n);
        int *res=(int *)malloc(sizeof(int)*n);
        
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            res[i]=1;
        }
        for(i=n-1;i>=1;i--)
        {
            if(arr[i]>=0 && arr[i-1]<0 || arr[i]<0 && arr[i-1]>=0)
            {
                res[i-1]=res[i]+1;
            }
        }
        for(i=0;i<n;i++)
        {
         printf("%d ",res[i]);
        }
        printf("\n");
    }
    
}
