#include<stdio.h>
int main()
{
    long int i, n; FILE *fp;
    float Threshold,weights[4],sum = 0.0;
    int values[16][4], given_value[4], j, k;

   if((fp = fopen("value.txt", "r"))==NULL)
        {
            printf("Cannot open file.\n");
        }


           for(j=0; j<=4; j++)
            {
                if(j==4)
                    fscanf(fp, "%f", &Threshold);
                else
                    if (fscanf(fp, "%f", &weights[j]) != 1)
                        {
                            break;
                        }
                printf("\nweights[%d]: %f ",j,weights[j]);
            }
      fclose(fp);
    printf("\n%f ",Threshold);
    printf("\n\n---------------------(Weights are set, ready to percept)---------------------");
   printf("\n\nPlease enter an element to find which class is it of : \t");

        j=0;
        while(j<4)
             {
                scanf("%d",&given_value[j]);                  //taking the value to test from user
                printf("\t\t\t\t\t\t\t");
                j++;
             }
        sum=0;
        j=0;

        while(j<4)
             {
                 sum += (given_value[j]*weights[j]);        //getting the weight
                 j++;
             }
        if(sum < Threshold)                   //comparing the weight with the Threshold and getting the result
              printf("\nThe percepted element %d %d %d %d is from Class 0\n",given_value[0],given_value[1],given_value[2],given_value[3]);
        else
             printf("\nThe percepted element %d %d %d %d is from Class 1\n",given_value[0],given_value[1],given_value[2],given_value[3]);



return 0;
}
