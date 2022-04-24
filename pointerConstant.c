#include <stdio.h>
int main(void)
{
    int var1 = 1, var2 = 2, var3 = 3;
    int const var4 = 10;
    // declaring and initializing constant pointer
    int *const ptr = &var1;
    // declaring and initializing pointer to constant
    const int *ptr1 = &var3;
    // declaring and initializing pointer constant variable var4
    int *ptr2 = &var4;
    // on compilation this line gives an error b'se it is a constant pointer
    ptr = &var2;
    // on compilation this line gives an error, why?
    *ptr1 = 1;
    // on compilation this gives a warning, why?
    *ptr2 = 5;
    printf("%d\n", *ptr);
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);
    return 0;
}