#include <stdio.h>

int main(void)
{
    float xmax, xmin, ymax, ymin;
    float x1, y1, x2, y2, x3, y3, x4, y4;
    int flag1, flag2;
    scanf("%f%f%f%f",&xmax, &xmin, &ymax, &ymin);
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

    //First End Point
    if(x1>xmin && x1<xmax && y1>ymin && y1<ymax)
    {
        flag1 = 0; //inside
        printf("%f %f", x1, y1);
    }
    else if(x1<=xmin && y1>=ymax)
    {
        flag1 = 5; //up-left
        x3 = xmin;
        y3 = y1+(y2-y1)*((xmin-x1)/(x2-x1));

        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }

        x4 = x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y4 = ymax;

        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f\n",x4, y4);
        }
    }
    else if(x1>=xmax && y1>=ymax)
    {
        flag1 = 6; //up-right

        x3 = xmax;
        y3 = y1+(y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }

        x4 = x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y4 = ymax;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f\n",x4, y4);
        }
    }
    else if(x1<=xmin && y1<=ymin)
    {
        flag1 = 7; //down-left
        x3 = xmin;
        y3 = y1+(y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }

        x4 = x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y4 = ymin;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f\n",x4, y4);
        }
    }
    else if(x1>=xmax && y1<=ymin)
    {
        flag1 = 8; //down-right
        x3 = xmax;
        y3 = y1+(y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }

        x4 = x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y4 = ymin;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f\n",x4, y4);
        }
    }
    else if(y1>=ymax)
    {
        flag1 = 1; //up
        x3 = x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y3 = ymax;
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }
    }
    else if(y1<=ymin)
    {
        flag1 = 2; //down
        x3 = x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y3 = ymin;
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }

    }
    else if(x1>=xmax)
    {
        flag1 = 4; //right
        x3 = xmax;
        y3 = y1+(y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }
    }
    else if(x1<=xmin)
    {
        flag1 = 3; //left
        x3 = xmin;
        y3 = y1+(y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }
    }


    //Second End Point

    if(x2>xmin && x2<xmax && y2>ymin && y2<ymax)
    {
        flag2 = 0; //inside
        printf("%f %f\n", x2, y2);
    }
    else if(x2<=xmin && y2>=ymax)
    {
        flag2 = 5; //up-left
        x3 = xmin;
        y3 = y1+(y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }

        x4 = x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y4 = ymax;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f\n",x4, y4);
        }
    }
    else if(x2>=xmax && y2>=ymax)
    {
        flag2 = 6; //up-right
        x3 = xmax;
        y3 = y1+(y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }
        x4 = x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y4 = ymax;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f\n",x4, y4);
        }
    }
    else if(x2<=xmin && y2<=ymin)
    {
        flag2 = 7; //down-left
        x3 = xmin;
        y3 = y1+(y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }
        x4 = x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y4 = ymin;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f\n",x4, y4);
        }
    }
    else if(x2>=xmax && y2<=ymin)
    {
        flag2 = 8; //down-right
        x3 = xmax;
        y3 = y1+(y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }
        x4 = x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y4 = ymin;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f\n",x4, y4);
        }
    }
    else if(y2>=ymax)
    {
        flag2 = 1; //up
        x3 = x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y3 = ymax;
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }
    }
    else if(y2<=ymin)
    {
        flag2 = 2; //down
        x3 = x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y3 = ymin;
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }
    }
    else if(x2>=xmax)
    {
        flag2 = 4; //right
        x3 = xmax;
        y3 = y1+(y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }
    }
    else if(x2<=xmin)
    {
        flag2 = 3; //left
         x3 = xmin;
        y3 = y1+(y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f\n",x3, y3);
        }
    }

    printf("\n%d %d",flag1, flag2);
    return 0;
}
