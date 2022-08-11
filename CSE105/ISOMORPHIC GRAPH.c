#include<stdio.h>
void main(){
    int i,j,vertex_1,vertex_2,adj1[10][10],adj2[10][10],count,c=0;
    int s1[20],s2[20];
    printf("How many vertices (Graph 1)?=");
    scanf("%d",&vertex_1);
    printf("Enter your adjacency matrix:\n");
    for(i=0;i<vertex_1;i++){
        for(j=0;j<vertex_1;j++){
            printf("Connection of (%c,%c) = ",i+65,j+65);
            scanf("%d",&adj1[i][j]);
        }
    }
    for(i=0;i<vertex_1;i++){
        count=0;
        for(j=0;j<vertex_1;j++){
            if(i==j && adj1[i][j]==1)
                count=count+2;
            else
                count=count+adj1[i][j];
        }
        printf("Deg(%c)=%d\n",i+65,count);
        s1[i]=count;
    }
    //for(i=0;i<vertex_1;i++)
      //  printf("%d ",s1[i]);
    count=0;
    printf("\nHow many vertices (Graph 2)?=");
    scanf("%d",&vertex_2);
    if(vertex_1!=vertex_2){
        printf("Not Isomorphic Graph");
        return 0;
    }
    printf("Enter your adjacency matrix:\n");
    for(i=0;i<vertex_2;i++){
        for(j=0;j<vertex_2;j++){
            printf("Connection of (%c,%c) = ",i+65,j+65);
            scanf("%d",&adj2[i][j]);
        }
    }
    for(i=0;i<vertex_2;i++){
        count=0;
        for(j=0;j<vertex_2;j++){
            if(i==j && adj2[i][j]==1)
                count=count+2;
            else
                count=count+adj2[i][j];
        }
        printf("Deg(%c)=%d\n",i+65,count);
        s2[i]=count;
    }
    //for(i=0;i<vertex_2;i++)
      //  printf("%d ",s2[i]);
    for(i=0;i<vertex_1;i++){
        for(j=0;j<vertex_2;j++){
            if(s1[i]==s2[j]){
                c++;
                break;
            }
        }
    }
    if(c==vertex_1)
        printf("Isomorphic Graph");
    else
        printf("Not Isomorphic Graph");
}
