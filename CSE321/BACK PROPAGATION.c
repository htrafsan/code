#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int i, n,j,a,k;
   time_t t;
   double c,weightij[10][10],weightjk[10][10],uhj[5],activj[5],uok[5],oaj[5],oaj1,netaj[10];
   double netak[5],c1,c2,activk[5],oak1,oak[5],delak[5],del,del1,sum;
   double delweightjk[10][10],delweightij[10][10],deluok[5],deluhj[5];
   FILE *fp;
   fp = fopen("valuebwij.txt", "w+");
   FILE *fp1;
   fp1 = fopen("valuebwjk.txt", "w+");
   FILE *fpuhj;
   fpuhj = fopen("valuebuhj.txt", "w+");
   FILE *fpuok;
   fpuok = fopen("valuebuok.txt", "w+");
   n = 5;
 //Initialize part of back propagation
   /* Intializes random number generator */
   //srand((unsigned) time(&t));

   /* Generate 8(4*2) random numbers weightij from 0 to 1 */
   for( i = 0 ; i < 4 ; i++ )
    {
        for(j=0;j<2;j++)
           {
              weightij[i][j]=(double)(rand() % 10) / 10;
              fprintf(fp,"%lf ",weightij[i][j]);
           }

     }
   /* Generate 4(2*2) random numbers weightij from 0 to 1 */
   for( i = 0 ; i < 2 ; i++ )
    {
        for(j=0;j<2;j++)
           {
              weightjk[i][j]=(double)(rand() % 10) / 10;
              fprintf(fp1,"%lf ",weightjk[i][j]);
           }

     }
   /* Generate 2 random numbers threshold uhj from 0 to 1 */
   for(j=0;j<2;j++)
       {
          uhj[j]=(double)(rand() % 10) / 10;
          fprintf(fpuhj,"%lf ",uhj[j]);
       }
   /* Generate 2 random numbers threshold uok from 0 to 1 */
   for(k=0;k<2;k++)
      {
         uok[k]=(double)(rand() % 10) / 10;
         fprintf(fpuok,"%lf ",uok[k]);
      }
   /* Generate 4 random numbers Constant from 0 to 1 */
    float eta1=0.1;
    float eta2=0.1;
    float k1=0.4;
    float k2=0.5;
   /* Input 16 numbers from 0 / 1 */
    int o[16][5] = {  0,0,0,0,0,
                      0,0,0,1,0,
                      0,0,1,0,0,
                      0,0,1,1,0,
                      0,1,0,0,0,
                      0,1,0,1,0,
                      0,1,1,0,0,
                      0,1,1,1,0,
                      1,0,0,0,1,
                      1,0,0,1,1,
                      1,0,1,0,1,
                      1,0,1,1,1,
                      1,1,0,0,1,
                      1,1,0,1,1,
                      1,1,1,0,1,
                      1,1,1,1,1};
    /* Print Input 16 numbers from 0 / 1 */
        for( i = 0 ; i < 16 ; i++ )
            {
                for(j=0;j<4;j++)
                   {
                      printf("%d ",o[i][j]);
                   }
                printf("\n");
             }
    /* Target Output 4 numbers from 0 / 1 */
    int tar[4][2] = { 0,0,
                      0,1,
                      1,0,
                      1,1};
   /* Print Target Output 4 numbers from 0 / 1 */
   for( i = 0 ; i < 4 ; i++ )
    {
        for(j=0;j<2;j++)
           {
              printf("tar[%d][%d]:%d ",i,j,tar[i][j]);
           }
        printf("\n");
     }
  //Initialize part end of back propagation
  //////////////////////////////////////////////////

for(a=0;a<1;a++)
 {
   // Calculation Part1
   c=0;
   do{
       for(j=0;j<2;j++)
          {
            c1=0;
            for(i=0;i<4;i++)
               {
                  c1 += weightij[j][i] * o[a][i];
               }
               netaj[j]=c1;
             //printf("\nnetaj[%d]: %lf",j,netaj[j]);
          }
       for(j=0;j<2;j++)
          {
             activj[j]=netaj[j]+uhj[j];
             printf("\nactivj[%d]: %lf",j,activj[j]);
             oaj1=1+exp(-(k1*activj[j]));
             oaj[j]=1/oaj1;
             printf("\n\tOaj[%d]:%lf",j,oaj[j]);
          }
      // Calculation Part1 end
      // Calculation Part2

      for(j=0;j<2;j++)
          {
            c2=0;
            for(k=0;k<2;k++)
               {
                  c2+= weightjk[j][k]*oaj[j];
                  netak[j]=c2;
               }
             printf("\nnetak[%d]: %lf",j,netak[j]);
          }

       for(k=0;k<2;k++)
          {
             activk[k]=netak[k]+uok[k];
             printf("\nactivk[%d]: %lf",k,activk[k]);
             oak1=1+exp(-(k2*activk[k]));
             oak[k]=1/oak1;
             printf("\nOak[%d]: %lf",k,oak[k]);
          }
       n=floor(a/4);
       printf("\nN=%d",n);
       del1=0;
        for(k=0;k<2;k++)
            {
                delak[k]=tar[n][k]-oak[k];
                del1 += delak[k];
            }
        del=del1/2;

           printf("\nDelak1: %lf",delak[0]);
           printf("\nDelak2: %lf",delak[1]);
           printf("\nDel: %lf",del);
           if(del <= 0.001)
             {
                 for(j=0;j<2;j++)
                   {
                     for(k=0;k<2;k++)
                         {
                             delweightjk[j][k]=eta2*k2*delak[k]*oaj[j],oak[k]*(1-oak[k]);
                             printf("\ndelweightjk[%d][%d]: %lf ",j,k,delweightjk[j][k]);
                             weightjk[j][k]=weightjk[j][k] + delweightjk[j][k];
                             printf("\n%lf ",weightjk[j][k]);
                         }
                     deluok[j]=eta2*k2*delak[k]*oak[k]*(1-oak[k]);
                     uok[j]=uok[j]+deluok[j];
                     fprintf(fpuok,"%lf ",uok[j]);
                   }

             }
c++;
    }while(c <= 3);
    printf("%f",c);
}
  return(0);
}
