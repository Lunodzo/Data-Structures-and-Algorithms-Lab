/* Write a C program to find out the largest element in the array. */

#include <stdio.h>
#include <conio.h>

void main(){
    int x[10];
    int i, large;
    clrscr();
    printf("Enter any 10 numbers");
    for (i = 0; i < 10; i++){
        scanf("%d", &x[i]);
    }
    large = x[0];

    
    for (i = 1; i < 10; i++){
        If(x[i] > large)
            large = x[i];
    }
    printf("%d", large);
    getch();
}