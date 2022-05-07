#include <stdio.h>
int main(){
    //Declaration of variables
    char c;
    int x;
    float y;

    //Declaration of pointer variables
    char *ptr_c;
    int *ptr_x;
    float *ptr_y;

    //Variable initialisation
    c = 'A';
    x = 7;
    y = 123.45;

    //Pointer initialisation
    ptr_c = &c;
    ptr_x = &x;
    ptr_y = &y;

    //Printing address of pointer and their contents
    printf("ptr_c: Address=0x%p, Content=0x%p\n", &ptr_c, ptr_c);
    printf("ptr_x: Address=0x%p, Content=0x%p\n", &ptr_x, ptr_x);
    printf("ptr_y: Address=0x%p, Content=0x%p\n", &ptr_y, ptr_y);

    //Printing the variable values using indirection (Difference operator)
    printf("*ptr_c => %c \n", *ptr_c);
    printf("*ptr_x => %d \n", *ptr_x);
    printf("*ptr_y => %5.2f \n", *ptr_y);

    //Printing variable values using direct method
    printf("c => %c\n", c);
    printf("x => %d\n", x);
    printf("y => %5.2f\n", y);

    return 0;
}