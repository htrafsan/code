#include<stdio.h>
int main(void)
{
    int flag1, flag2;
    float y_max, y_min, x_max, x_min;
    float x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%f%f%f%f", &y_max, &y_min, &x_max, &x_min);
    scanf("%f%f%f%f",&x1, &y1, &x2, &y2);
    if(x1<x_max && x1>x_min && y1<y_max && y1>y_min)
    {
        flag1 = 1; //inside
        printf("\n%f %f",x1, y1);
    }
    else if(x1<x_min && y1>y_max)
    {
        flag1 = 6; //top-left
        x3 = x_min;
        y3 = y1 + (y2 - y1) * ((x_min - x1) / (x2 - x1));
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
        x4 = x1 + (x2 - x1) * ((y_max - y1) / (y2 - y1));
        y4 = y_max;
        if(x4<=x_max && x4>=x_min && y4<=y_max && y4>=y_min)
        {
            printf("\n%f %f", x4, y4);
        }
    }
    else if(x1>x_max && y1>y_max)
    {
        flag1 = 7; //top-right
        x3 = x_max;
        y3 = y1 + (y2 - y1) * ((x_max - x1) / (x2 - x1));
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
        x4 = x1 + (x2 - x1) * ((y_max - y1) / (y2 - y1));
        y4 = y_max;
        if(x4<=x_max && x4>=x_min && y4<=y_max && y4>=y_min)
        {
            printf("\n%f %f", x4, y4);
        }
    }
    else if(x1<x_min && y1<y_min)
    {
        flag1 = 8; //bottom- left
        x3 = x_min;
        y3 = y1 + (y2 - y1) * ((x_min - x1) / (x2 - x1));
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
        x4 = x1 + (x2 - x1) * ((y_min - y1) / (y2 - y1));
        y4 = y_min;
        if(x4<=x_max && x4>=x_min && y4<=y_max && y4>=y_min)
        {
            printf("\n%f %f", x4, y4);
        }
    }
    else if(x1>x_max && y1<y_min)
    {
        flag1 = 9; //bottom-right
        x3 = x_max;
        y3 = y1 + (y2 - y1) * ((x_max - x1) / (x2 - x1));
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
        x4 = x1 + (x2 - x1) * ((y_min - y1) / (y2 - y1));
        y4 = y_min;
        if(x4<=x_max && x4>=x_min && y4<=y_max && y4>=y_min)
        {
            printf("\n%f %f", x4, y4);
        }
    }
    else if(y1>y_max)
    {
        flag1 = 2; //top
        x3 = x1 + (x2 - x1) * ((y_max - y1) / (y2 - y1));
        y3 = y_max;
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
    }
    else if(x1<x_min)
    {
        flag1 = 3; //left
        x3 = x_min;
        y3 = y1 + (y2 - y1) * ((x_min - x1) / (x2 - x1));
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
    }
    else if(x1>x_max)
    {
        flag1 = 4; //right
        x3 = x_max;
        y3 = y1 + (y2 - y1) * ((x_max - x1) / (x2 - x1));
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
    }
    else if(y1<y_min)
    {
        flag1 = 5; //bottom
        x3 = x1 + (x2 - x1) * ((y_min - y1) / (y2 - y1));
        y3 = y_min;
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
    }

    if(x2<x_max && x2>x_min && y2<y_max && y2>y_min)
    {
        flag2 = 1; //inside
        printf("\n%f %f",x2, y2);
    }
    else if(x2<x_min && y2>y_max)
    {
        flag2 = 6; //top-left
        x3 = x_min;
        y3 = y1 + (y2 - y1) * ((x_min - x1) / (x2 - x1));
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
        x4 = x1 + (x2 - x1) * ((y_max - y1) / (y2 - y1));
        y4 = y_max;
        if(x4<=x_max && x4>=x_min && y4<=y_max && y4>=y_min)
        {
            printf("\n%f %f", x4, y4);
        }
    }
    else if(x2>x_max && y2>y_max)
    {
        flag2 = 7; //top-right
        x3 = x_max;
        y3 = y1 + (y2 - y1) * ((x_max - x1) / (x2 - x1));
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
        x4 = x1 + (x2 - x1) * ((y_max - y1) / (y2 - y1));
        y4 = y_max;
        if(x4<=x_max && x4>=x_min && y4<=y_max && y4>=y_min)
        {
            printf("\n%f %f", x4, y4);
        }
    }
    else if(x2<x_min && y2<y_min)
    {
        flag2 = 8; //bottom- left
        x3 = x_min;
        y3 = y1 + (y2 - y1) * ((x_min - x1) / (x2 - x1));
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
        x4 = x1 + (x2 - x1) * ((y_min - y1) / (y2 - y1));
        y4 = y_min;
        if(x4<=x_max && x4>=x_min && y4<=y_max && y4>=y_min)
        {
            printf("\n%f %f", x4, y4);
        }
    }
    else if(x2>x_max && y2<y_min)
    {
        flag2 = 9; //bottom-right
        x3 = x_max;
        y3 = y1 + (y2 - y1) * ((x_max - x1) / (x2 - x1));
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
        x4 = x1 + (x2 - x1) * ((y_min - y1) / (y2 - y1));
        y4 = y_min;
        if(x4<=x_max && x4>=x_min && y4<=y_max && y4>=y_min)
        {
            printf("\n%f %f", x4, y4);
        }
    }
    else if(y2>y_max)
    {
        flag2 = 2; //top
        x3 = x1 + (x2 - x1) * ((y_max - y1) / (y2 - y1));
        y3 = y_max;
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
    }
    else if(x2<x_min)
    {
        flag2 = 3; //left
        x3 = x_min;
        y3 = y1 + (y2 - y1) * ((x_min - x1) / (x2 - x1));
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
    }
    else if(x2>x_max)
    {
        flag2 = 4; //right
        x3 = x_max;
        y3 = y1 + (y2 - y1) * ((x_max - x1) / (x2 - x1));
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
    }
    else if(y2<y_min)
    {
        flag2 = 5; //bottom
        x3 = x1 + (x2 - x1) * ((y_min - y1) / (y2 - y1));
        y3 = y_min;
        if(x3<=x_max && x3>=x_min && y3<=y_max && y3>=y_min)
        {
            printf("\n%f %f", x3, y3);
        }
    }
    printf("\n%d %d", flag1, flag2);
    return 0;
}
