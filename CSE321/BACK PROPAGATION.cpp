#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <bitset>
#include<cmath>
#define forj for(int j=0;j<2;j++)
#define fork for(int k=0;k<2;k++)

#define fori for(int i=0;i<4;i++)
#define fora for(int a=0;a<16;a++)
#define ita2 0.7
#define k2 0.8
#define ita1 0.79
#define k1 0.9
#define error_rate 0.001
using namespace std;

int main(){
double wij[4][2],wjk[2][2],uhj[2],uok[2],netaj[16][2],netak[16][2],activj[2],activok[2],oaj[16][2],oak[16][2],dak[16][2],dwjk[2][2];
double duok[2],dwij[4][2],duhj[2];
int oai[16][4],x[4],tak[16][2];

//randomize input to hidden layer weight
fori
forj
wij[i][j]= (double)rand()/(double)RAND_MAX;

//randomize  hidden to output layer weight
forj
fork
wjk[j][k]= (double)rand()/(double)RAND_MAX;


//randomize hidden layer threshold
forj
uhj[j]= (double)rand()/(double)RAND_MAX;


//randomize output layer threshold
fork
uok[k]= (double)rand()/(double)RAND_MAX;







//input set initialization
fora{
double p,w,m=(double)a;

for(int i=3;i>=0;i--){
m=m/2.0;
p=modf(m,&w); //divide integer(w) and fractional part(x) here m is the main double type data
if(p==0.5)x[i]=1;
else x[i]=0;
m=w;}

fori
oai[a][i]=x[i];
fori x[i]=0;
}


//desired output set initialization
tak[0][0]=0;tak[0][1]=0;
tak[1][0]=0;tak[1][1]=0;
tak[2][0]=0;tak[2][1]=0;
tak[3][0]=0;tak[3][1]=0;
tak[4][0]=0;tak[4][1]=1;
tak[5][0]=0;tak[5][1]=1;
tak[6][0]=0;tak[6][1]=1;
tak[7][0]=0;tak[7][1]=1;
tak[8][0]=1;tak[8][1]=0;
tak[9][0]=1;tak[9][1]=0;
tak[10][0]=1;tak[10][1]=0;
tak[11][0]=1;tak[11][1]=0;
tak[12][0]=1;tak[12][1]=1;
tak[13][0]=1;tak[13][1]=1;
tak[14][0]=1;tak[14][1]=1;
tak[15][0]=1;tak[15][1]=1;


while(1){

//netaj calculation
fora{
forj{
    double netaj_sum=0;
    fori
    netaj_sum=netaj_sum+(wij[i][j]*(double)oai[a][i]);
    netaj[a][j]=netaj_sum;
    activj[j]=netaj[a][j]+uhj[j];
    oaj[a][j]=1/(1+exp(k1*(-activj[j])));
  }
}
fora{
fork{
    double netak_sum=0;
    forj
    netak_sum=netak_sum+(wjk[j][k]*(double)oaj[a][j]);
    netak[a][k]=netak_sum;
    activok[k]=netak[a][k]+uok[k];
    oak[a][k]=1/(1+exp(k2*(-activok[k])));
  }

}
int flag=0;
double temp;
fora{
fork{
    dak[a][k]=(double)tak[a][k]-oak[a][k];
    if(dak[a][k]<0)temp=0-dak[a][k];
    else temp=dak[a][k];
    if(temp<error_rate)flag++;
}
forj
fork{
dwjk[j][k]=ita2*k2*dak[a][k]*oaj[a][j]*oak[a][k]*(1.0-oak[a][k]);
wjk[j][k]=wjk[j][k]+dwjk[j][k];}

}
if(flag==32)break;
fora
fork{
duok[k]=ita2*k2*dak[a][k]*oak[a][k]*(1-oak[a][k]);
uok[k]=uok[k]+duok[k];
}


fora
fori
forj{
double sum=0.0;
fork
sum=sum+(dak[a][k]*wjk[j][k]);
dwij[i][j]=ita1*k1* oai[a][i]*oaj[a][j]*(1-oaj[a][j])*sum;
wij[i][j]=wij[i][j]+dwij[i][j];
}

fora
forj{
double sum=0.0;
fork
sum+=dak[a][k]*wjk[j][k];
duhj[j]=ita1*k1*oaj[a][j]*(1-oaj[a][j])*sum;
uhj[j]=uhj[j]+duhj[j];
}

}





//netaj calculation
fora{
forj{
    double netaj_sum=0;
    fori
    netaj_sum=netaj_sum+(wij[i][j]*(double)oai[a][i]);
    netaj[a][j]=netaj_sum;
    activj[j]=netaj[a][j]+uhj[j];
    oaj[a][j]=1/(1+exp(0.8*(-activj[j])));
  }
}
fora{
fork{
    double netak_sum=0;
    forj
    netak_sum=netak_sum+(wjk[j][k]*(double)oaj[a][j]);
    netak[a][k]=netak_sum;
    activok[k]=netak[a][k]+uok[k];
    oak[a][k]=1/(1+exp(0.8*(-activok[k])));
if(oak[a][k]>0.999)printf("1 ");
else printf("0 ");

  }
printf("\n");
}








return 0;}
