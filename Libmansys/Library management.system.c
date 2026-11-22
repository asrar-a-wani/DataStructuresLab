#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[100];
    int isIssued;

    struct Book *next;
};

struct Book *head = NULL;

void addBook() {

    struct Book *newBook;

    newBook = (struct Book*)malloc(sizeof(struct Book));

    if (newBook == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &newBook->id);

    printf("Enter Book Title: ");
    scanf(" %99[^\n]", newBook->title);

    printf("Enter Author Name: ");
    scanf(" %99[^\n]", newBook->author);

    newBook->isIssued = 0;
    newBook->next = NULL;

    if (head == NULL) {
        head = newBook;
    }
    else {
        struct Book *temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newBook;
    }

    printf("\nBook added successfully!\n");
}

void displayBooks() {

    struct Book *temp = head;

    if (head == NULL) {
        printf("\nLibrary is empty!\n");
        return;
    }

    printf("\n========== BOOK RECORDS ==========\n");

    while (temp != NULL) {

        printf("\nBook ID: %d", temp->id);
        printf("\nTitle: %s", temp->title);
        printf("\nAuthor: %s", temp->author);

        if (temp->isIssued == 1)
            printf("\nStatus: Issued\n");
        else
            printf("\nStatus: Available\n");

        temp = temp->next;
    }
}

void searchBook() {

    int searchID;

    printf("Enter Book ID to search: ");
    scanf("%d", &searchID);

    struct Book *temp = head;

    while (temp != NULL) {

        if (temp->id == searchID) {

            printf("\nBook Found!\n");
            printf("Title: %s\n", temp->title);
            printf("Author: %s\n", temp->author);

            printf("Status: %s\n",
                temp->isIssued ? "Issued" : "Available");

            return;
        }

        temp = temp->next;
    }

    printf("\nBook not found!\n");
}

void issueBook() {

    int id;

    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    struct Book *temp = head;

    while (temp != NULL) {

        if (temp->id == id) {

            if (temp->isIssued == 1) {
                printf("Book is already issued!\n");
            }
            else {
                temp->isIssued = 1;
                printf("Book issued successfully!\n");
            }

            return;
        }

        temp = temp->next;
    }

    printf("Book not found!\n");
}


void returnBook() {

    int id;

    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    struct Book *temp = head;

    while (temp != NULL) {

        if (temp->id == id) {

            if (temp->isIssued == 0) {
                printf("Book was not issued!\n");
            }
            else {
                temp->isIssued = 0;
                printf("Book returned successfully!\n");
            }

            return;
        }

        temp = temp->next;
    }

    printf("Book not found!\n");
}

void deleteBook() {

    int id;

    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    struct Book *temp = head;
    struct Book *prev = NULL;

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Book not found!\n");
        return;
    }

    if (prev == NULL) {
        head = temp->next;
    }
    else {
        prev->next = temp->next;
    }

    free(temp);

    printf("Book deleted successfully!\n");
}

int main() {

    int choice;

    while (1) {

        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                deleteBook();
                break;

            case 7:
                printf("Exiting Library System...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}



