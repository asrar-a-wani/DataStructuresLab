#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int value)
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Stack Overflow!");
    }
    else
    {
        newnode->data = value;
        newnode->next = top;
        top = newnode;

        printf("%d pushed into stack.\n", value);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    return 0;
}

