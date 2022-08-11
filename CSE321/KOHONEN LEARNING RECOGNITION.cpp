#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <bitset>
#include<cmath>
using namespace std;

int main(void)
{
    int p=9,pos;
    double min_short_distance=1.9;
    double q=50.0;
    double ita1=0.25;
    double error_rate=0.001;
    double wij[3][9],clone_zero_wij[3][9],clone_wij[3][9],com_wij[8][3][9];
    double k=2,saved_dj[p];
    int saved_dec_value[p],dec_value=0;
    //randomize input to all weight
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<9; j++)
        {
            wij[i][j]= (double)rand()/(double)RAND_MAX;//input set initialization
            printf("initial randomize weights=> %.5lf\n\n",wij[i][j]);
        }
    }
    //making replica of wij
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<9; j++)
        {
            clone_zero_wij[i][j]=wij[i][j];
        }
    }
    int x[8][4],xx[4];
    //converting 3 bit inputs into binary
    for(int a=0; a<8; a++)
    {
        double pp,w,mm=(double)a;
        for(int i=2; i>=0; i--)
        {
            mm=mm/2.0;
            pp=modf(mm,&w); //divide integer(w) and fractional part(x) here m is the main double type data
            if(pp==0.5)
            {
                xx[i]=1;
            }
            else xx[i]=0;
            {
                mm=w;
            }
        }
        for(int i=0; i<3; i++)
        {
            x[a][i]=xx[i];
        }
        for(int i=0; i<3; i++)
        {
            xx[i]=0;
        }
    }
    double d[p];
    int count_dj=0;
    int c=0;
    //calculating dj
    int count_input_index=0;
    int g=0,h;
    while(count_dj<8)
    {
        int position[9]= {0,1,2,3,4,5,6,7,8};
        p=9;
        int n=0,m=0;
        k=2;
        for(int j=0; j<9; j++)
        {
            d[j]=0.0;
            position[j]=j;
            saved_dj[j]=0.0;
        }
        dec_value=0;
        int ccount=0;
        q=50;
        while(1)
        {
            position[p];
            for(int j=0; j<9; j++)
            {
                saved_dj[j]=0.0;
            }
            for(int t=0; t<p; t++)
            {
                for(int i=0; i<3; i++)
                {
                    dec_value+=(int)pow(2,k)*x[count_dj][i];
                    k-=1;
                    //updating dj
                    d[t]+=(x[count_dj][i]-wij[i][t])*(x[count_dj][i]-wij[i][t]);
                }
                saved_dj[t]=d[t];
            }
            double xchange_var;
            int xchange_var_dec;
            for(m=0; m<p; m++)
            {
                for(n=m+1; n<p; n++)
                {
                    if(saved_dj[m]>saved_dj[n])
                    {
                        xchange_var=saved_dj[m];
                        saved_dj[m]=saved_dj[n];
                        saved_dj[n]=xchange_var;
                        xchange_var_dec=position[m];
                        position[m]=position[n];
                        position[n]=xchange_var_dec;
                    }
                }
            }
            int l,vcounttttt=0;
            for(l=1; l<p; l++)
            {
                if(q<saved_dj[l])
                {
                    for(int v=l; v<p; v++)
                    {
                        saved_dj[v]=0.0;
                        vcounttttt=1;
                    }
                    p=l;
                }
                if(vcounttttt==1)
                    break;

            }

            //checking for ending condition at current input
            int brcount=0;
            //double short_dis=abs(saved_dec_value[0]-saved_dj[0]);
            if((saved_dj[0]!=0.0)&&(saved_dj[1]==0.0)&&(saved_dj[2]==0.0)&&(saved_dj[3]==0.0)&&(saved_dj[4]==0.0)&&(saved_dj[5]==0.0)&&(saved_dj[6]==0.0)&&(saved_dj[7]==0.0)&&(saved_dj[8]==0.0))
            {
                brcount=1;

                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<9; j++)
                        com_wij[g][i][j]=wij[i][j];
                }
            }
            if(brcount==1)
                break;
            for(int i=0; i<3; i++)
            {
                for(int r=0; r<p; r++)
                {
                    wij[i][r]=wij[i][r]+(ita1*(x[count_input_index][i]-wij[i][r]));
                }
            }
            q=q-(ita1*q);
            ccount+=1;
        }
        g+=1;
        printf("for %d\n",dec_value);
        printf("updated weights==>\n1->%.5lf\n2->%.5lf\n3->%.5lf\n",wij[0][0],wij[1][0],wij[2][0]);
        printf("position==>%d\n\n",position[0]);
        printf("dj value==>%.5f\n",saved_dj[0]);
        count_input_index+=1;
        count_dj+=1;
        printf("\n\n");
    }


    //recognition
    int y;
    printf("Enter a value\n");
    scanf("%d",& y);
    if(y!=0)
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<9; j++)
            {
                clone_wij[i][j]=com_wij[y-1][i][j];
            }
        }
    }
    else
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<9; j++)
            {
                clone_wij[i][j]=clone_zero_wij[i][j];
            }
        }
    }
    //compare the value with learned values
    p=9;
    q=50.0;
    k=2,saved_dj[p];
    saved_dec_value[p],dec_value=0;

    int x1[4],xx1[4];

    //converting input in binary
    double pp,w,mm=(double)y;
    for(int i=2; i>=0; i--)
    {
        mm=mm/2.0;
        pp=modf(mm,&w); //divide integer(w) and fractional part(x) here m is the main double type data
        if(pp==0.5)xx1[i]=1;
        else xx1[i]=0;
        mm=w;
    }
    printf("binary form==>\n");
    for(int i=0; i<3; i++)
        x1[i]=xx1[i];
    for(int i=0; i<3; i++)
    {
        printf("%d ",x1[i]);
        xx1[i]=0;
    }

    printf("\n");
    d[p];
    count_dj=0;
    //calculating dj
    count_input_index=0;

    //task
    int position[9]= {0,1,2,3,4,5,6,7,8};
    p=9;
    int n=0,m=0;
    k=2;
    for(int j=0; j<9; j++)
    {
        d[j]=0.0;
        position[j]=j;
        saved_dj[j]=0.0;
    }
    dec_value=0;
    int ccount=0;
    q=50;
    while(1)
    {
        position[p];
        for(int j=0; j<9; j++)
        {
            saved_dj[j]=0.0;
        }
        for(int t=0; t<p; t++)
        {
            for(int i=0; i<3; i++)
            {
                dec_value+=(int)pow(2,k)*x1[i];
                k-=1;
                //updating dj
                d[t]+=(x1[i]-clone_wij[i][t])*(x1[i]-clone_wij[i][t]);
            }
            saved_dj[t]=d[t];
        }
        //printf("dec value %d\n",dec_value);
        m=n=0;
        double xchange_var;
        int xchange_var_dec;
        for(m=0; m<p; m++)
        {
            for(n=m+1; n<p; n++)
            {
                if(saved_dj[m]>saved_dj[n])
                {
                    xchange_var=saved_dj[m];
                    saved_dj[m]=saved_dj[n];
                    saved_dj[n]=xchange_var;
                    xchange_var_dec=position[m];
                    position[m]=position[n];
                    position[n]=xchange_var_dec;
                }
            }
        }
        int l,vcounttttt=0;
        for(l=1; l<p; l++)
        {
            if(q<saved_dj[l])
            {
                for(int v=l; v<p; v++)
                {
                    saved_dj[v]=0.0;
                    vcounttttt=1;
                }
                p=l;
            }
            if(vcounttttt==1)
                break;

        }

        //checking for ending condition at current input
        int brcount=0;
        //double short_dis=abs(saved_dec_value[0]-saved_dj[0]);
        if((saved_dj[0]!=0.0)&&(saved_dj[1]==0.0)&&(saved_dj[2]==0.0)&&(saved_dj[3]==0.0)&&(saved_dj[4]==0.0)&&(saved_dj[5]==0.0)&&(saved_dj[6]==0.0)&&(saved_dj[7]==0.0)&&(saved_dj[8]==0.0))
        {
            brcount=1;
        }
        if(brcount==1)
        {
            break;
        }
        for(int i=0; i<3; i++)
        {
            for(int r=0; r<p; r++)
            {
                clone_wij[i][r]=clone_wij[i][r]+(ita1*(x1[i]-clone_wij[i][r]));
            }
        }
        q=q-(ita1*q);
    }
    printf("for %d\n",dec_value);
    printf("updated weights==>\n1->%.5lf\n2->%.5lf\n3->%.5lf\n",clone_wij[0][0],clone_wij[1][0],clone_wij[2][0]);
    printf("position==>%d\n\n",position[0]);
    printf("dj value==>%.5f\n",saved_dj[0]);
    count_input_index+=1;
    printf("\n\n");
    return 0;
}
