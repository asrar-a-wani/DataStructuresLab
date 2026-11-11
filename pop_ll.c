#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void pop()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack Underflow!");
    }
    else
    {
        temp = top;

        printf("%d popped from stack.\n", top->data);

        top = top->next;

        free(temp);
    }
}

int main()
{
    // Creating stack
    struct node *first, *second, *third;

    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    first->data = 10;
    first->next = NULL;

    second->data = 20;
    second->next = first;

    third->data = 30;
    third->next = second;

    top = third;

    pop();
    pop();

    return 0;
}

