#include <stdio.h>
//Declare an array size
#define STACKSIZE 10
int main(){
    //Declare a stack
    int intSTACK[STACKSIZE];
    int top;
    return 0;
}

// initialize empty stack
void stack()
{
    top = -1;
}

//PUSH OPERATION
//pUSH AN ITEM ON THE STACK
void push(int x)
{
    if (top == STACKSIZE - 1)
    {
        printf("The stack is full");
    }
    else
    {
        intSTACK[++top] = x;
    }
    /*
    intSTACK[++top] is similar to
    top=top+1;
    intSTACK[top];
    */
}

// pop implementation
void pop()
{
    if (top < 0)
    { // or if(top==-1)
        printf("stack under flow");
    }
    else
    {
        intSTACK[top--];
    }
    /*
    intSTACK[top--] is similar to
    intSTACK[top];
    top=top-1;
    */
}

// viewing on top element
void top()
{
    if (top < 0)
    { // or if(top==-1)
        printf("stack under flow");
    }
    else
    {
        printf("%d\n", intSTACK[top]);
    }
}

// Display all elements from the stack
void display()
{
    if (top < 0)
    {
        printf(" stack empty");
    }
    else
    {
        for (int i = top; i >= 0; i--)
            printf("%d\n", intSTACK[i]);
    }
}