#include<stdio.h>

int main(void)
{
    float xmin, xmax, ymin, ymax;
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &xmin, &xmax, &ymin, &ymax);
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    //inside
    if(x1>=xmin && x1<=xmax && y1>=ymin && y1<=ymax)
    {
        printf("0\n");
    }

    //up-left
    else if(x1<xmin && y1>ymax)
    {
        printf("1\n");
    }

    //up-right
    else if(x1>xmax && y1>ymax)
    {
        printf("2\n");
    }

    //down-left
    else if(x1<xmin && y1<ymin)
    {
        printf("3\n");
    }

    //down-right
    else if(x1>xmax && y1<ymin)
    {
        printf("4\n");
    }
    //up
    else if(y1>ymax)
    {
        printf("5\n");
    }
    //left
    else if(x1<xmin)
    {
        printf("6\n");
    }
    //down
    else if(y1<ymin)
    {
        printf("7\n");
    }
    //right
    else if(x1>xmax)
    {
        printf("8\n");
    }



    //inside
    if(x2>=xmin && x2<=xmax && y2>=ymin && y2<=ymax)
    {
        printf("0\n");
    }

    //up-left
    else if(x2<xmin && y2>ymax)
    {
        printf("1\n");
    }

    //up-right
    else if(x2>xmax && y2>ymax)
    {
        printf("2\n");
    }

    //down-left
    else if(x1<xmin && y1<ymin)
    {
        printf("3\n");
    }

    //down-right
    else if(x2>xmax && y2<ymin)
    {
        printf("4\n");
    }
    //up
    else if(y2>ymax)
    {
        printf("5\n");
    }
    //left
    else if(x2<xmin)
    {
        printf("6\n");
    }
    //down
    else if(y2<ymin)
    {
        printf("7\n");
    }
    //right
    else if(x2>xmax)
    {
        printf("8\n");
    }


    return 0;
}
