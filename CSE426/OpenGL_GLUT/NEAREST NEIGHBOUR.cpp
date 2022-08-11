#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int G1x[100]= {50,70,40,87,65,90,17,62,35,100};
int G1y[100]= {50,22,87,49,18,33,47,62,86,51};
int G2x[100]= {150,170,140,187,165,190,117,162,135,200};
int G2y[100]= {155,122,187,149,118,133,147,162,186,151};
int x,y,indx=10,indx2=10,val1,val2;
int i,j,l,m,n,p;
float temp1=0,sum1=0,temp2=0,sum2=0,min1=9999,min2=9999;
int main()
{
    initwindow(700,400);
    int gd = DETECT, gm;
    for(i=0; i<indx; i++)
    {
        putpixel(G1x[i],G1y[i],WHITE);
        putpixel(G1x[i]+1,G1y[i],WHITE);
        putpixel(G1x[i],G1y[i]+1,WHITE);
        putpixel(G1x[i]+1,G1y[i]+1,WHITE);
    }
    for(j=0; j<indx2; j++)
    {
        putpixel(G2x[j],G2y[j],YELLOW);
        putpixel(G2x[j]+1,G2y[j],YELLOW);
        putpixel(G2x[j],G2y[j]+1,YELLOW);
        putpixel(G2x[j]+1,G2y[j]+1,YELLOW);
    }
    cout<<"How many points to check:";
    cin>>p;
    for(l=0; l<p; l++)
    {
        val1=0;
        val2=0;
        printf("Enter point:\nx=");
        scanf("%d",&x);
        printf("\ny=");
        scanf("%d",&y);
        for(i=0; i<indx; i++)
        {
            temp1=sqrt(pow((G1x[i]-x),2)+pow((G1y[i]-y),2));
            if(temp1<min1)
            {
                min1=temp1;
            }
//sum1+=temp1;
            temp1=0;
        }
//sum1=sum1/10;
        for(j=0; j<indx2; j++)
        {
            temp2=sqrt(pow((G2x[j]-x),2)+pow((G2y[j]-y),2));

            if(temp2<min2)
            {
                min2=temp2;
            }
            sum2+=temp2;
            temp2=0;
        }
//sum2=sum2/10;

        if(min1<min2)
        {
            val1=1;
            // cout<<"G1 group";
            putpixel(x,y,WHITE);
            putpixel(x+1,y,WHITE);
            putpixel(x,y+1,WHITE);
            putpixel(x+1,y+1,WHITE);
            G1x[indx]=x;
            G1y[indx]=y;
            indx++;

        }
        if(min2<min1)
        {
            val2=1;
            //  cout<<"G2 group";

            putpixel(x,y,YELLOW);
            putpixel(x+1,y,YELLOW);
            putpixel(x,y+1,YELLOW);
            putpixel(x+1,y+1,YELLOW);
            G2x[indx2]=x;
            G2y[indx2]=y;
            indx2++;
        }
        min2=9999;
        min1=9999;
        cout<<"\n\nG1 Updated Array\n";
        for(m=0; m<indx; m++)
        {
            cout<<G1x[m]<<"->"<<G1y[m]<<endl;
        }
        cout<<"\n\nG2 Updated Array\n";
        for(n=0; n<indx2; n++)
        {
            cout<<G2x[n]<<"->"<<G2y[n]<<endl;
        }
        if(val1==1)
            cout<<"\nPoint is in G1 group\n"<<endl;
        if(val2==1)
            cout<<"\nPoint is in G2 group\n"<<endl;
    }
    getch();
    closegraph();
    return 0;
}
