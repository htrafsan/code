#include<stdio.h>
#include<string.h>


int  main()
{
    freopen("input.txt","r",stdin);

    char keywords[10][10] = {"void","main","int","printf","scanf",
                             "float","return"
                            };
    char operators[40][10] = {"=","+","*","/","^","(",")","{","}",
                              "[","]"
                             };
    char dataType[10][10] = {"int","float","double","char"};
            char value[100][100];
    char key[100][10],oper[100][10],var[100][10];

    int idxKey=0,idxOp = 0,idxVar = 0,i;
    char str[20],prestr[20]="";
    for(i  = 0;i<100;i++)
    {
        strcpy(value[i],"");
    }
    while(scanf("%s",&str)!=EOF)
    {

        if(strcmp(str,"=")==0)
            {
                for(i = 0;i<idxVar;i++)
                {
                    if(strcmp(var[i],prestr)==0)
                    {
                        scanf("%s",&value[i]);
                        if(value[i][0]<'0' || value[i][0]>'9')
                           strcpy(value[i],"");
                    }
                }
            }

        for( i = 0; i<7; i++)
        {
            if(strcmp(str,keywords[i]) == 0)
            {
                strcpy(key[idxKey++],str);
                // printf("%s",str);

            }
        }
        for( i  = 0; i<11; i++)
        {
            if(strcmp(str,operators[i]) == 0)
            {
                strcpy(oper[idxOp++],str);
            }
        }

        for( i  = 0; i<4; i++)
        {
            if(strcmp(str,dataType[i]) == 0)
            {

                char vr[20];
                while(scanf("%s",&vr) && strcmp(vr,";")!=0)
                {
                    //printf("ok");
                    if(vr[0]>='a' && vr[0]<='z')
                    {
                        strcpy(var[idxVar++],vr);
                    }
                }
            }
        }
        strcpy(prestr,str);
    }

//cout<<
//freopen("out.txt","w",stdout);
    printf("Keyword \t Variable \t Value \t Operator \n\n");
    int mxidx=0 ;
    if(idxKey>mxidx)
        mxidx = idxKey;
    if(idxOp>mxidx)
        mxidx = idxOp;
    if(idxVar>mxidx)
        mxidx = idxVar;


    for( i = 0; i<mxidx; i++)
    {
        if(idxKey>i)
            printf("%s",key[i]);
        printf("\t\t");
        if(idxVar>i)
           printf("%s",var[i]);
        printf("\t\t");

        if(idxVar>i)
            printf("%s",value[i]);

            printf("\t\t");
        if(idxOp>i)
            printf("%s",oper[i]);
        printf("\n");
    }

}
