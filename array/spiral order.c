
/*n*n sipral matrix */

#include <stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    int a=0,b=n-1,c=n-1,d=0,i,cnt=0;
    int **arr=(int **)malloc(n*n);
    for(i=0;i<n;i++)
    {
        arr[i]=(int*)(malloc(n*sizeof(int)));
    }
    while(a<=c && d<=b)
    {
        
        for(i=d;i<=b;i++)
        {
            arr[a][i]=cnt++;
        }
        a++;
        for(i=a;i<=c;i++)
        {
            arr[i][b]=cnt++;
        }
        b--;
        for(i=b;i>=d;i--)
        {
            arr[c][i]=cnt++;
        }
        c--;
        for( i=c;i>=a;i--)
        {
            arr[i][d]=cnt++;
        }
        d++;
        
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d   ",arr[i][j]);
            
        }
        printf("\n");
    }
    
    
    
}
