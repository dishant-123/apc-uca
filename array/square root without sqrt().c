/**
 * @input x : Integer
 * @input n : Integer
 * @input d : Integer
 * 
 * @Output Integer
 */
 #include<stdio.h>
 int main()
 {
 	printf("%d",powmod(71045970,41535484,64735492));
 }
int powmod(int x, int n, int d) {
    int i,p=x,x1;
    if(n%2==0)
    {
        x1=x*x;
        for(i=0;i<n/2;i++)
        {
            p=x1*p;
        }
        printf("%d \n",p);
    }
    
    else
    {
    for(i=0;i<n-1;i++)
    {
        p=p*x;
    }
    }
    if(p>=0)
    return (p%d);
    else
    return (p+d);
}

