#include <stdio.h>
int main(){
    char c, *ptr_c;
    c = 'A';

    //Assigning a pointer
    ptr_c = &c;
    printf("*ptr_c => %c\n", *ptr_c);

    //Changing the value via pointer
    *ptr_c = 'B';

    //Printing the new value of variable
    printf("\nNew value of c after cahninging via pointer\n");
    printf("*ptr_c => %c\n", *ptr_c);
    printf("c => %c\n", c);
    return 0;
}