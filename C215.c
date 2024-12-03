#include <stdio.h>
int main()
{
    long a;
    int b,c;
    scanf("%14ld%3d%c",&a,&b,&c);
    if (b%2==0)
    {
        printf("Female");
    }
    else
    {
        printf("Male");
    }
}