#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node * prev;
    struct node * next;
}*startNode, *endNode;


void linkListCreation(int n);
void insertNodeAtEnd(int num);
void displayList(int a);

int main()
{
    int n,num1,a;
    startNode = NULL;
    endNode = NULL;
    printf("\n Input the number of nodes : ");
    scanf("%d", &n);
    linkListCreation(n);
    a=1;
    displayList(a);
    printf(" Input data for the last node : ");
    scanf("%d", &num1);
    insertNodeAtEnd(num1);
    a=2;
    displayList(a);
    return 0;
}

void linkListCreation(int n)
{
    int i, num;
    struct node *fnNode;

    if(n >= 1)
    {
        startNode = (struct node *)malloc(sizeof(struct node));

        if(startNode != NULL)
        {
            printf(" Input data for node 1 : ");
            scanf("%d", &num);

            startNode->num = num;
            startNode->prev = NULL;
            startNode->next = NULL;
            endNode = startNode;
            for(i=2; i<=n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->prev = endNode;
                    fnNode->next = NULL;
                    endNode->next = fnNode;
                    endNode = fnNode;
                }
                else
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}

void insertNodeAtEnd(int num)
{
    struct node * newnode;

    if(endNode == NULL)
    {
        printf(" No data found in the list!\n");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->num = num;
        newnode->next = NULL;
        newnode->prev = endNode;
        endNode->next = newnode;
        endNode = newnode;
    }
}

void displayList(int m)
{
    struct node * temp;
    int n = 1;
    if(startNode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        temp = startNode;
        if (m==1)
        {
            printf("\n Data entered in the list are :\n");
        }
        else
        {
            printf("\n After insertion the new list are :\n");
            printf("\n After insertion the new list are :\n");
        }
        while(temp != NULL)
        {
            printf(" node %d : %d\n", n, temp->num);
            n++;
            temp = temp->next;
        }
    }
}
