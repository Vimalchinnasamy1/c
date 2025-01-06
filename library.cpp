#include <stdio.h>
#include <string.h>
#define MAX 100

struct book {
    char title[100];
    int id;
    char author[100];
    char genre[50];
    int copies;
};

struct book library[MAX];
int book_count = 0;

void addBook() {
    if (book_count < MAX) {
        printf("Enter Book Title: ");
        scanf(" %[^\n]s", library[book_count].title);
        printf("Enter Book ID: ");
        scanf("%d", &library[book_count].id);
        printf("Enter Author Name: ");
        scanf(" %[^\n]s", library[book_count].author);
        printf("Enter Genre: ");
        scanf(" %[^\n]s", library[book_count].genre);
        printf("Enter Number of Copies: ");
        scanf("%d", &library[book_count].copies);
        book_count++;
        printf("Book added successfully!\n");
    } else {
        printf("Library is full. Cannot add more books.\n");
    }
}

void searchBook() {
    int id;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < book_count; i++) {
        if (library[i].id == id) {
            printf("\nBook Title: %s\nBook ID: %d\nAuthor: %s\nGenre: %s\nCopies: %d\n", 
                   library[i].title, library[i].id, library[i].author, library[i].genre, library[i].copies);
            return;
        }
    }
    printf("Book with ID %d not found.\n", id);
}

void displayBooks() {
    if (book_count == 0) {
        printf("No books in the library.\n");
    } else {
        for (int i = 0; i < book_count; i++) {
            printf("\nBook Title: %s\nBook ID: %d\nAuthor: %s\nGenre: %s\nCopies: %d\n", 
                   library[i].title, library[i].id, library[i].author, library[i].genre, library[i].copies);
        }
    }
}

int main() {
    int choice;
    do {
        printf("\nLibrary Management System");
        printf("\n1. Add Book\n2. Display Books\n3. Search Book\n4. Exit\nEnter your choice: ");
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
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

