/* Write a C program which will read 10 numbers of elements and store into an array and also display that numbers. */

#include <stdio.h>
#include <conio.h>

void main(){
    int x[10], i;
    clrscr();
    printf("Enter any 10 numbers");

    for (i = 0; i < 10; i++){
        scanf("%d", &x[i]);
    }
    for (i = 0; i < 10; i++){
        printf("%d", x[i]);
    }
    getch();
}