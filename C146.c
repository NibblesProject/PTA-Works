#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,sum;
    scanf("[%f,%f]", &a, &b);
    a=ceil(a);
    b=floor(b);
    sum=b-a+1;
    printf("%d",(int)sum);
}
