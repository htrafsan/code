#include<iostream>
using namespace std;
int main()
{
int v_number,counter=0,counter2=0,degree1=0,degree2=0,iso_check=0,edge1,edge2;
cout<<"Enter the number of vertex(for graph 1): ";
cin>>v_number;
int v1_number;
cout<<"Enter the number of vertex(for graph 2): ";
cin>>v1_number;
int A[v_number][v_number];
int a[v_number];
int B[v1_number][v1_number];
int b[v1_number];
cout<<"Enter you Adjecent Matrix:(for graph 1)"<<endl;

for(int i=0;i<v_number;i++)
{
    for(int j=0;j<v_number;j++)
    {
      cout<<"A["<<i<<"]["<<j<<"]= ";
      cin>>A[i][j];
    }
}

cout<<"Enter you Adjecent Matrix:(for graph 2)"<<endl;

for(int i=0;i<v1_number;i++)
{
    for(int j=0;j<v1_number;j++)
    {
      cout<<"B["<<i<<"]["<<j<<"]= ";
      cin>>B[i][j];
    }
}

cout<<"Adjecency Matrix(for graph 1)"<<endl;
cout<<"---------------------------"<<endl;
for(int k=0;k<v_number;k++)
{

 for(int l=0;l<v_number;l++)
   {
       cout<<A[k][l];
       if(A[k][l]==1)
       {
           counter++;
           degree1++;
       }
   }
   a[k]=degree1;
   degree1=0;
   cout<<endl;
}
edge1=counter/2;
if((counter/2)==((v_number*(v_number-1))/2)) cout<<"It is a complete graph"<<endl;
else
cout<<"Graph1 is not a complete graph"<<endl;

cout<<"\n\nAdjecency Matrix(for graph 2)"<<endl;
cout<<"---------------------------"<<endl;
for(int k=0;k<v1_number;k++)
{

 for(int l=0;l<v1_number;l++)
   {
       cout<<B[k][l];
       if(B[k][l]==1)

       {
           counter2++;
           degree2++;
       }
   }
   b[k]=degree2;
   degree2=0;
   cout<<endl;
}
edge2=counter2/2;
if((counter2/2)==((v1_number*(v1_number-1))/2)) cout<<"It is a complete graph"<<endl;
else
cout<<"Graph2 is not a complete graph"<<endl;
for(int n=0;n<v_number;n++)
{
    if(a[n]==b[n])
    {
        iso_check++;
    }
}
if((iso_check==v_number)&&(v_number==v1_number)&&(edge1==edge2)) cout<<"Thses graph are isomorphic graphs"<<endl;
else
  cout<<"Thses graphs are not isomorphic graphs"<<endl;
return 0;
}
