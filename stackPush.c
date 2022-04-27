#include <stdio.h>
int main(){
    // Push an item on the stack
    void push(int x){
        if (top == STACKSIZE - 1){
            printf("The stack is full");
        }else{
            intSTACK[++top] = x;
        }
        /*
        intSTACK[++top] is similar to
        top=top+1;
        intSTACK[top];
        */
    }
    return 0;
}
