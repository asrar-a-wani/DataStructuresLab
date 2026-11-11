#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int value)
{
    struct node *newnode, *temp;

    newnode = (struct node*)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed!");
        return;
    }

    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    printf("%d inserted successfully.\n", value);
}

void display()
{
    struct node *temp = head;

    printf("Linked List: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    insert(10);
    insert(20);
    insert(30);

    display();

    return 0;
}

