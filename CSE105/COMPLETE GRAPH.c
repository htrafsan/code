#include<stdio.h>
void main(){
    int i,j,vertex,adj[10][10],count,c=0;
    printf("How many vertices?=");
    scanf("%d",&vertex);
    printf("Enter your adjacency matrix:\n");
    for(i=0;i<vertex;i++)
        for(j=0;j<vertex;j++)
            scanf("%d",&adj[i][j]);
    for(i=0;i<vertex;i++){
        count=0;
        for(j=0;j<vertex;j++){
            if(i==j && adj[i][j]==0)
                count++;
            else if(i!=j && adj[i][j]==1)
                count++;
        }
        if(count==vertex)
            c++;
    }
    if(c==vertex)
        printf("It's a complete graph");
    else
        printf("It is not a complete graph");
}
