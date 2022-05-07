#include <stdio.h>
int main(){
    int a[] = {1, 2, 3, 4, 5, 6};
    int *p_a = a;
    int *ptr_a;
    int i;

    // Accessing the address of variable (array)
    printf("\nUsing name of array: %d", a);
    printf("\nUsing pointer: %d\n", p_a);

    /*showing successive adress of array elements using & */
    printf("Showing successive address of array elements using &\n");

    for (i = 0; i <= 5; i++){
        printf("\n %d\n", &a[i]);
    }

    /* showing successive address of array elements using pointer arithmetic */
    printf("\nshowing successive address of array elements using pointer arithmetic\n");

    for(i=0;i<=5;i++){
        printf("\n %d\n", p_a++);
    }
    
    /* reset the pointer */
    p_a=a;
    
    /* Accesing array elements using pointer arithmetic*/
    printf("\nAccesing array elements using pointer arithmetic \n");
    
    for(i=0;i<=5;i++){
        printf("\n %d\n", *p_a++);
    }
    
    //Reset and assignment of operators
    p_a=&a[0];
    ptr_a=&a[4];
    
    //Pointer differencing
    printf("\nPointer differencing\n");
    printf("\n %d \n",ptr_a-p_a);
    return 0;
}