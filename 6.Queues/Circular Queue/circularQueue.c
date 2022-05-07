#include <stdio.h>
#include <conio.h>

#define MAX 10
int queue[MAX];
int front = –1, rear = –1;

//Functions
void insert(void);
int delete_element(void);
int peek(void);
void display(void);

//Function definiton
void insert(){
    int num;
    printf("\n Enter the number to be inserted in the queue: ");
    scanf("%d", &num);

    //Check if the queue is full
    if(front==0 && rear==MAX-1){
        printf("\n OVERFLOW");
    }else if(front==-1 && rear==-1){//Check if queue is empty, then insert an element
        front = rear = 0;
        queue[rear] = num;
    }else if(rear==MAX-1 && front != 0){
        rear=0;
        queue[rear]=num;
    }else{
        rear++;
        queue[rear]=num;
    }
}

int delete_element(){
    int val;
    if(front==-1 && rear==-1){
        printf("\n UNDERFLOW");
        return -1;
    }

    val=queue[front];
    if(front==rear){
        front=rear=-1;
    }else{
        if(front==MAX-1){
            front=0;
        }else{
            front++;
        }
    }
    return val;
}

int peek(){
    if(front==-1 && rear==-1){
        printf("\n QUEUE IS EMPTY");
        return -1;
    }else{
        return queue[front];
    }
}

void display(){
    int i;
    printf("\n");
    if(front==-1 && rear==-1){
        printf("\n QUEUE IS EMPTY");
    }else{
        if(front<rear){
            for(i=front;i<=rear;i++){
                printf("\t %d", queue[i]);
            }
        }else{
            for(i=front;i<MAX;i++){
                printf("\t %d", queue[i]);
            }
            for(i=0;i<=rear;i++){
                printf("\t %d", queue[i]);
            }
        }
    }
}