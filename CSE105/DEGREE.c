#include<stdio.h>
void main(){
    int i,j,vertex,adj[10][10],count;
    int s1[20],s2[20];
    printf("How many vertices?=");
    scanf("%d",&vertex);
    printf("Enter your adjacency matrix:\n");
    for(i=0;i<vertex;i++){
        for(j=0;j<vertex;j++){
            printf("Connection of (%c,%c) = ",i+65,j+65);
            scanf("%d",&adj[i][j]);
        }
    }
    for(i=0;i<vertex;i++){
        count=0;
        for(j=0;j<vertex;j++){
            if(i==j && adj[i][j]==1)
                count=count+2;
            else
                count=count+adj[i][j];
        }
        printf("deg(%c)=%d",i+65,count);
        printf("\n");
    }
}
