#include<stdio.h>
#include<math.h>

int main(void)
{
    float x1, y1, x2, y2;
    scanf("%f%f%f%f",&x1, &y1, &x2, &y2);
    float m;
    if(x1!=x2)
    {
        m = (y2-y1)/(x2-x1);
        printf("\nSlop value: %f",m);
    }
    float c;
    c = y1 - m*x1;
    printf("\nConstant value: %f",c);
    float minx, maxx;
    if(x1<x2)
    {
        minx = x1;
        maxx = x2;
    }
    else
    {
        minx = x2;
        maxx = x1;
    }
    float y;
    for(float i = minx; i<=maxx; i++)
    {
        y = round(m*i + c);
        printf("\nPixel coordinates: %.0f %.0f", i, y);
    }
    return 0;
}
