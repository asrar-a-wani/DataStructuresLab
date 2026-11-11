#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

int main()
{
    // Inserting elements
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    pop();
    pop();

    return 0;
}

