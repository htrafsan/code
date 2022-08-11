#include<stdio.h>
#include<math.h>
int main(void)
{
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    float m;
    m = (y2 - y1)/(x2 - x1);
    printf("Slop value: %f\n", m);
    float c;
    c = y1 - m*x1;
    int minx, maxx;
    printf("Constant value: %f\n", c);
    if(x1 < x2)
    {
       minx = x1;
       maxx = x2;
    }
    else
    {
        minx = x2;
        maxx = x1;
    }
    for(int i=minx; i<=maxx; i++)
    {
        int y = round(m*i + c);
        printf("Coordinate of line: (%d, %d)\n", i, y);
    }
    return 0;
}
