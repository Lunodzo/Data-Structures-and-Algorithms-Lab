// Write a program to find whether the array of integers contains a duplicate number.

#include <stdio.h>
#include <conio.h>
int main(){
    int array[10], i, n, j, flag = 0;
    clrscr();
    printf("\n Enter the size of the array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                flag = 1;
                printf("\n Duplicate numbers found at locations %d and %d", i, j);
            }
        }
    }
    if (flag == 0)
        printf("\n No Duplicates Found");
    return 0;
}