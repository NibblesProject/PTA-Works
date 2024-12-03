#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if (m%n==0)
    {
        printf("%d",m/n);
    }
    else
    {
        printf("%d",(int)ceil(m/n+1));
    }
}