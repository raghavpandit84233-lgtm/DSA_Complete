#include<stdio.h>
#define MAXSIZE 10 
int stack[MAXSIZE],top=-1;
void display()
{
    if(top==-1)
    {
        printf("STACK is empty");
    }
    else{
        printf("\nSTACK elements are :\n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
void pop()
{
    int n;
    if (top==-1)
    {
      printf("STACK is Empty");
    }
    else
    {
        n=stack[top];
        top--;
        printf("Poped element : %d\n",n);
    }    
}
void push()
{
    int n ;
    if(top==MAXSIZE-1)
    {
        printf("STACK Overflow !!");
    }
    else{
        printf("Enter an element : ");
        scanf("%d",&n);
        top++;
        stack[top]=n;
    }
}
int main ()
{
int choice;
do{
    printf("__________STACK__________");
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    printf("__________________________");
    printf("\n\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        display();
        break;

        default: printf("INVALID CHOICE !!");
    }
}while (choice!=4);
return 0;
}
