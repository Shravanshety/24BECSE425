#include <stdio.h>
#define n 5
int num[n];
int top = -1;

void push(int x)
{
    if top
        == n - 1
        {
            printf("stack is overflown \n");
        }
    else
    {
        top++;
        num[top] = x;
    }
}
void pop()
{
    if top
        == -1
        {
            printf("stack is underflown \n");
        }
    else
    {
        int p = num[top];
        top--;
        printf(" popped element is %d\n", p);
    }
}

void display()
{
    if top
        == -1
        {
            printf("stack is empty \n");
        }
    else
    {
        for (int i; i <= top; ++)
        {
            printf("THE ELEMENT IN INDEX %d is %d\n", i, num[top];)
        }
    }
}

int main()
{
    int choice;
    int item;
    do
    {
        printf("push:1, pop:2, display:3 , Exit:4\n");
        priintf("enter ur choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the element:\n");
            scanf("%d,&item");
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        default:
            printf("invalid input\n")
        }
    }
}
