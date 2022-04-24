#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr;
    // declaring pointer to pointer
    int **ptr1;
    ptr = &a;

    // initiliazing pointer to pointer
    ptr1 = &ptr;
    
    /*printing value of variable using pointer to variable
    and pointer to pointer respectively*/
    printf("\nUsing pointer to variable the value is %d ", *ptr);
    printf("\nUsing pointer to pointer the value is %d\n", **ptr1);
    return 0;
}