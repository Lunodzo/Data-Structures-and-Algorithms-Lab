#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, arr[20], large, second_large;
    clrscr();
    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("\n Enter the elements");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    large = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > large)
            large = arr[i];
    }
    second_large = arr[1];
    for (i = 0; i < n; i++)
    {
        if (arr[i] != large)
        {
            if (arr[i] > second_large)
                second_large = arr[i];
        }
    }
    printf("\n The numbers you entered are : ");
    for (i = 0; i < n; i++)
        printf("\t %d", arr[i]);
    printf("\n The largest of these numbers is : %d", large);
    printf("\n The second largest of these numbers is : %d", second_large);
    return 0;
}