#include <stdio.h>

int main(void)
{
    float x1, y1, x2, y2;
    float minx, maxx;
    scanf("%f %f %f %f",&x1, &y1, &x2, &y2);

    float m = (y2 - y1) / (x2 - x1);
    float c = y1 - m * x1;

    if(x1 > x2)
    {
        minx = x2;
        maxx = x1;
    }
    else
    {
        minx = x1;
        maxx = x2;
    }

    for (float x = minx; x<= maxx; x++)
    {
        float y = round(m*x + c);
        printf("%.0f %.0f\n", x, y);
    }
    return 0;
}
