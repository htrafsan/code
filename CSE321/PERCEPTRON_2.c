#include<stdio.h>
#include<conio.h>

int main()
  {
      double  weights[4], Threshold = 0.5, sum = 0.0, output=0.0;
      int given_value[4], i, j, k;
      //int values[16][4];
      char* new_start = "Not Required";
      FILE *fp;
      fp = fopen("value.txt", "w+");
     int values[16][5] = {  0,0,0,0,0,
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
       int tar[16]={0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1};
      /*

        for(i=0;i<16;i++)
            {
                printf("Enter the value of %d Inputrow & Target",i);
                for(j=0;j<=3;j++)
                    {
                         printf("\nW[%d][%d]: ",i,j);
                         scanf("%d",&values[i][j]);
                    }
                printf("\nOutput[%d]: ",i);
                scanf("%d",&tar[i]);
            }

*/

          i=0;
          j=0;
          while(i<16)    //Input values
             {
               j=3;
               k=i;
               while(j>=0)
                    {
                    values[i][j]=k%2;
                    //printf("Values[%d][%d]: %d\n",i,j,values[i][j]);
                    k=k/2;
                    j--;

                    }
                   // printf("\n\n");
               i++;
             }

   //------------------------------------------------------
   //Printf the input value
   for(i=0;i<16;i++)
    {
      for(j=0;j<4;j++)
       printf("Values[%d][%d]: %d\n",i,j,values[i][j]);
       //printf("Desired: %d\n",tar[i]);
      printf("\n\n");
    }


               printf("\n---No kind of input error has been handled, enter accuret values)-----");
               printf("\nPlease input the weights:\n");
               j=0;
               while(j<4)
                    {
                        printf("\tWeights 0%d: ",j+1);
                        scanf("%f",&weights[j]);                 //taking the weights from the user
                        j++;
                    }
               printf("Please input the Threshold : ");
               scanf("%f",&Threshold);

               i=0;

        while(i<16)
          {
                    sum=0;
                    j=0;
                    while(j<4)
                         {
                             sum += (values[i][j]*weights[j]); //calculating the weighted sum
                             j++;
                         }
                    if(sum < Threshold)
                         output = 0;
                    else
                          output = 1;

               if(i < 8)                             //to find which class the value is from, it indicates that this is from class A (0-7)
                 {
                     if(output != 0)                       //The desired output of class A is 0, but if not then we will decrease
                        {
                            j=0;
                            while(j<4)
                                 {
                                     weights[j] -= ((0.1) * (values[i][j]));     //that weight which correspondingly having 1 in its input
                                     j++;                        //if value is 0, "((0.1) * (values[i][j]))" will result 0
                                 }
                            new_start = "Required";
                            i=i;
                        }
                     else
                        {
                            if(new_start=="Required")
                                 {
                                     new_start="Not Required";
                                     i=0;
                                 }
                            else
                                 i++;                        //weights are ok, so go on
                        }
                  }
               else
                  {
                    if(output == 1)
                         {
                            if(new_start=="Required")
                                {
                                  new_start="Not Required";
                                  i=0;
                                }
                            else
                              i++;
                         }
                    else
                       {
                           j=0;
                           while(j<4)
                                {
                                    weights[j] += ((0.1) * (values[i][j]));
                                    j++;
                                }
                           new_start = "Required";
                           i=i;
                       }
                  }
             }
for(k=0;k<4;k++)
    fprintf(fp,"%lf ",weights[k]);
    fprintf(fp,"%f",Threshold);
   return 0;
}


