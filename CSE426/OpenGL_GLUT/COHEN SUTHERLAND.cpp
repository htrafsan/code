#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4,x_max,x_min,y_max,y_min,flag1,flag2;
    cout<<"AREA: ";
    cin>>x_max>>x_min>>y_max>>y_min;
    cout<<"point1: ";
    cin>>x1>>y1;
    cout<<"point2: ";
    cin>>x2>>y2;

    // inside = 1, top left = 2, top right = 3, bottom left = 4
    // bottom right = 5, top = 6, bottom = 7, left = 8, right =9

    if(x_min<=x1 && x_max>=x1 && y_min<=y1 && y_max>=y1 )
    {
        flag1 = 1;
    }
    else if(y1>y_max && x1>x_max)
    {
        flag1 = 3;//top right
        x3 = x1+(x2-x1)*((y_max-y1)/(y2-y1));
        y3 =  y_max;
        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
        x4 = x_max;
        y4 = y1+(y2-y1)*((x_max - x1)/(x2-x1));

        if(x_min<=x4 && x_max>=x4 && y_min<=y4 && y_max>=y4)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
    }
    else if(y1>y_max && x1<x_min)
    {
        flag1 = 2;//top left
        x3 = x1+(x2-x1)*((y_max-y1)/(y2-y1));
        y3 =  y_max;
        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
        x4 = x_min;
        y4 = y1+(y2-y1)*((x_min-x1)/(x2-x1));
        if(x_min<=x4 && x_max>=x4 && y_min<=y4 && y_max>=y4)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
    }
    else if(y1<y_min && x1<x_min)
    {
        flag1 = 4;//bottom left
        x3= x1+(x2-x1)*((y_min-y1)/(y2-y1));
        y3= y_min;
        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
        x4 = x_min;
        y4 = y1+(y2-y1)*((x_min-x1)/(x2-x1));

        if(x_min<=x4 && x_max>=x4 && y_min<=y4 && y_max>=y4)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }

    }
    else if(y1<y_min && x1>x_max)
    {
        flag1 = 5;//bottom right
        x3= x1+(x2-x1)*((y_min-y1)/(y2-y1));
        y3= y_min;
        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
        x4 = x_max;
        y4 = y1+(y2-y1)*((x_max - x1)/(x2-x1));
        if(x_min<=x4 && x_max>=x4 && y_min<=y4 && y_max>=y4)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
    }
    else if(y1>y_max)
    {
        flag1 = 6;//top
        x3 = x1+(x2-x1)*((y_max-y1)/(y2-y1));
        y3 =  y_max;

        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
    }
    else if(x1>x_max)
    {
        flag1 = 9;//right

        x3 = x_max;
        y3 = y1+(y2-y1)*((x_max - x1)/(x2-x1));

        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }

    }
    else if(x1<x_min)
    {
        flag1 = 8;
        x3 = x_min;
        y3 = y1+(y2-y1)*((x_min-x1)/(x2-x1));

        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
    }
    else if(y1<y_min)
    {
        flag1 = 7;
        x3= x1+(x2-x1)*((y_min-y1)/(y2-y1));
        y3= y_min;

        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }

    }
    //cout<<"flag1 = "<< flag1;

    if(x_min<=x2 && x_max>=x2 && y_min<=y2 && y_max>=y2 )
    {
        flag2 = 1;
    }
    else if(y2>y_max && x2>x_max)
    {
        flag2 = 3;//top right

        x3 = x1+(x2-x1)*((y_max-y1)/(y2-y1));
        y3 =  y_max;
        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
        x4 = x_max;
        y4 = y1+(y2-y1)*((x_max - x1)/(x2-x1));

        if(x_min<=x4 && x_max>=x4 && y_min<=y4 && y_max>=y4)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }

    }
    else if(y2>y_max && x2<x_min)
    {
        flag2 = 2;//top left

        x3 = x1+(x2-x1)*((y_max-y1)/(y2-y1));
        y3 =  y_max;
        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
        x4 = x_min;
        y4 = y1+(y2-y1)*((x_min-x1)/(x2-x1));

        if(x_min<=x4 && x_max>=x4 && y_min<=y4 && y_max>=y4)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }

    }
    else if(y2<y_min && x2<x_min)
    {
        flag2 = 4;

        x3= x1+(x2-x1)*((y_min-y1)/(y2-y1));
        y3= y_min;
        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
        x4 = x_min;
        y4 = y1+(y2-y1)*((x_min-x1)/(x2-x1));

        if(x_min<=x4 && x_max>=x4 && y_min<=y4 && y_max>=y4)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }

    }
    else if(y2<y_min && x2>x_max)
    {
        flag2 = 5;

        x3= x1+(x2-x1)*((y_min-y1)/(y2-y1));
        y3= y_min;
        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
        x4 = x_max;
        y4 = y1+(y2-y1)*((x_max - x1)/(x2-x1));

        if(x_min<=x4 && x_max>=x4 && y_min<=y4 && y_max>=y4)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }

    }
    else if(y2>y_max)
    {
        flag2 = 6;//top
        x3 = x1+(x2-x1)*((y_max-y1)/(y2-y1));
        y3 =  y_max;

        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }


    }
    else if(x2>x_max)
    {
        flag2 = 9;//right
        x3 = x_max;
        y3 = y1+(y2-y1)*((x_max - x1)/(x2-x1));

        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }
    }
    else if(x2<x_min)
    {
        flag2 = 8;
        x3 = x_min;
        y3= y1+(y2-y1)*((x_min-x1)/(x2-x1));

        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }

    }
    else if(y2<y_min)
    {
        flag2 = 7;
        x3= x1+(x2-x1)*((y_min-y1)/(y2-y1));
        y3= y_min;

        if(x_min<=x3 && x_max>=x3 && y_min<=y3 && y_max>=y3)
        {
            cout<<"\npoint = ("<< x3<<","<<y3<<")";
        }
        else
        {
            cout<<"Reject\n";
        }

    }
    //cout<<"\nflag2 = "<< flag2;
    return 0;
}


