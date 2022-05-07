#include <stdio.h>

/* Declare and define a structure to hold the data. */
struct data{
    float amount;
    char fname[30];
    char lname[30];
} rec;

/* The function prototype. The function has no return value, */
/* and it takes a structure of type data as its one argument. */
void print_rec(struct data x);
void print_rec1(struct data *y);

main(){
    /* Input the data from the keyboard. */
    printf("Enter the donor's first and last names,\n");
    printf("separated by a space: ");
    scanf("%s %s", rec.fname, rec.lname);
    printf("\nEnter the donation amount: ");
    scanf("%f", &rec.amount);
    /* Call the display function. */
    print_rec(rec);
    /* call a display function that use a pointer */
    print_rec1(&rec);
    return 0;
}

void print_rec(struct data x){
    printf("\nDonor %s %s gave $%.2f.\n", x.fname, x.lname, x.amount);
}

void print_rec1(struct data *y){
    printf("\nDonor %s %s gave $%.2f.\n", y->fname, y->lname, y->amount);
    /* you can use this format. */
    printf("\nDonor %s %s gave $%.2f.\n", (*y).fname, (*y).lname, (*y).amount);
}