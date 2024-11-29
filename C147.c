#include <stdio.h>
#include <math.h>
int main()
{
    float ax,ay,bx,by,calc,sum;
    scanf("%f%f%f%f", &ax, &ay, &bx, &by);
    ax=ax*acos(-1)/180;
    ay=ay*acos(-1)/180;
    bx=bx*acos(-1)/180;
    by=by*acos(-1)/180;
    calc=cos(ay)*cos(by)*cos(fabs(ax-bx))+sin(ay)*sin(by);
    sum=6371.0*acos(calc);
    printf("%.1f",sum);
}