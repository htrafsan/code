#include <stdio.h>

int main(void)
{
    float xmax, xmin, ymax, ymin;
    float x1, y1, x2, y2;
    int flag1, flag2;
    scanf("%f%f%f%f",&xmax, &xmin, &ymax, &ymin);
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

    //First End Point
    if(x1>xmin && x1<xmax && y1>ymin && y1<ymax)
    {
        flag1 = 0; //inside
    }
    else if(x1<=xmin && y1>=ymax)
    {
        flag1 = 5; //up-left
    }
    else if(x1>=xmax && y1>=ymax)
    {
        flag1 = 6; //up-right
    }
    else if(x1<=xmin && y1<=ymin)
    {
        flag1 = 7; //down-left
    }
    else if(x1>=xmax && y1<=ymin)
    {
        flag1 = 8; //down-right
    }
    else if(y1>=ymax)
    {
        flag1 = 1; //up
    }
    else if(y1<=ymin)
    {
        flag1 = 2; //down
    }
    else if(x1>=xmax)
    {
        flag1 = 4; //right
    }
    else if(x1<=xmin)
    {
        flag1 = 3; //left
    }


    //Second End Point

    if(x2>xmin && x2<xmax && y2>ymin && y2<ymax)
    {
        flag2 = 0; //inside
    }
    else if(x2<=xmin && y2>=ymax)
    {
        flag2 = 5; //up-left
    }
    else if(x2>=xmax && y2>=ymax)
    {
        flag2 = 6; //up-right
    }
    else if(x2<=xmin && y2<=ymin)
    {
        flag2 = 7; //down-left
    }
    else if(x2>=xmax && y2<=ymin)
    {
        flag2 = 8; //down-right
    }
    else if(y2>=ymax)
    {
        flag2 = 1; //up
    }
    else if(y2<=ymin)
    {
        flag2 = 2; //down
    }
    else if(x2>=xmax)
    {
        flag2 = 4; //right
    }
    else if(x2<=xmin)
    {
        flag2 = 3; //left
    }

    printf("\n%d %d",flag1, flag2);
    return 0;
}
