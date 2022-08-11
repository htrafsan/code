#include<stdio.h>
#include<math.h>
void main(){
    int a,i,j,vertex,adj[10][10],count,c,d,e;

    printf("How many vertices ?=");
    scanf("%d",&vertex);
    a=floor(vertex/2);

    printf("Enter your adjacency matrix:\n");
    for(i=0;i<vertex;i++)
        for(j=0;j<vertex;j++)
            scanf("%d",&adj[i][j]);

    c=0;d=0;e=0;
    for(i=0;i<vertex;i++){
        count=0;
        for(j=0;j<vertex;j++){
            if(i==j && adj[i][j]==1)
                count=count+2;
            else
                count=count+adj[i][j];
        }
        printf("Deg(%c)=%d\n",i+65,count);
        if(count>= a)
            e++;
        else if(count%2==1)
            d++;
        else if(count%2==0)
            c++;
    }
    if(c==vertex)
        printf("Euler circuit\n");
    else
        printf("Not Euler Circuit\n");

    if(d==2)
        printf("Euler path\n");
    else
        printf("Not Euler path\n");

    if(e==vertex)
        printf("Hamilton circuit\n");
    else
        printf("Not Hamilton Circuit\n");

}
