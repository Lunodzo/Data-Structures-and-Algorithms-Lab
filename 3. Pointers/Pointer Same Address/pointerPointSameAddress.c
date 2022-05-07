#include <stdio.h>
int main(){
    int x = 1234;
    int *ptr_1, *ptr_2, *ptr_3;

    // printing the value and address of x variable
    printf("x: address=0x%p, content=%d\n", &x, x);

    // pointer initialization
    ptr_1 = &x;
    ptr_2 = &x;

    // initialize the ptr_3 value via ptr_1
    ptr_3 = ptr_1;

    // printing the address and content of the pointers
    printf("ptr_1: address=0x%p, content=0x%p\n", &ptr_1, ptr_1);
    printf("ptr_2: address=0x%p, content=0x%p\n", &ptr_2, ptr_2);
    printf("ptr_3: address=0x%p, content=0x%p\n", &ptr_3, ptr_3);

    
    // printing the value of X through indirections
    printf("*ptr_1 => %d\n", *ptr_1);
    printf("*ptr_2 => %d\n", *ptr_2);
    printf("*ptr_3 => %d\n", *ptr_3);
    return 0;
}
