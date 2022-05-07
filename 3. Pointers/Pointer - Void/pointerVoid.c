#include <stdio.h>
int main()
{
    int a = 10;
    float b = 10.5;
    void *ptr_v; // declaring void pointer

    /* initializing pointer. ptr_v holds an address whose
    type is unknown */
    ptr_v = &a;
    
    /* (int *) is used for type casting. Now the ptr_v holds
    the address of integer variable just after casting.
    Then this address is initialized to another pointer p */
    int *p = (int *)ptr_v;

    // Printing the value
    printf("\nValue is %d\n", *p);
    
    /* initilizing the ptr_v to point to another variable*/
    ptr_v = &b;
    printf("The value is %.1f\n", *((float *)ptr_v));
    return 0;
}