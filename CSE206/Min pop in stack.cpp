#include<stdio.h>
#define stackSize 4

int myStack[stackSize], top = -1,temp[stackSize],min=1000,i;

void push(int value)
{
    if(top>=stackSize)
        printf("  Stack is full!");
    else
    {
        printf("  Push: %d\n",value);

        top++;
        myStack[top]=value;

    }
}

void pop()
{
    if(top<0)
        printf("\nStack is underflow");
    else
        top--;
}

void MinPop()
{
    i=0;
    while(i<stackSize)
    {
        temp[i]=myStack[i];
        if(min>temp[i])
        {
            min=temp[i];
        }

        i++;
    }
    printf("\n  The minimum number is: %d\n",min);
}

void displayStack()
{
    printf("\n\n  Print the full stack from TOP to BOTTOM:\n");
    for(int i = stackSize-1; i>=0; i--)

        printf("  %d\n",myStack[i]);
}

int main()
{
    printf("\n");

    push(87);
    push(90);
    push(12);
    push(21);

    displayStack();

    pop();
    pop();

    MinPop();

    return 0;
}
