#include<stdio.h>
void main(){
    int p,q,option;
    do{
        printf("Value of p (0 for false, 1 for true):");
        scanf("%d",&p);
        printf("Value of q (0 for false, 1 for true):");
        scanf("%d",&q);
        printf("\n\nPress:\n1:NOT\n2:AND\n3:OR\n4:XOR\n5:IF-THEN\n6:IF AND ONLY IF\n7:EXIT\n\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                printf("-p=%d\n-q=%d\n",!p,!q);
                break;
            case 2:
                printf("p AND q=%d\n",p&q);
                break;
            case 3:
                printf("p OR q=%d\n",p|q);
                break;
            case 4:
                printf("p XOR q=%d\n",p^q);
                break;
            case 5:
                printf("p->q=%d\n",!p|q);
                break;
            case 6:
                printf("p<->q=%d\n",(!p|q)&(!q|p));
                break;
            case 7:
                break;
        }
    }
    while(option!=7);
}
