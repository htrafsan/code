#include <stdio.h>
#include <math.h>
#define pi 3.14159265

int main(void)
{
    float r, cx, cy;
    scanf("%f %f %f", &r, &cx, &cy);

    for (float theta = 0; theta < 360; theta = theta + 5)
    {
        float x = round(r*cos((pi * theta / 180)) + cx);
        float y = round(r*sin((pi * theta / 180)) + cy);
        printf("%.0f %.0f\n", x, y);
    }

    return 0;
}
