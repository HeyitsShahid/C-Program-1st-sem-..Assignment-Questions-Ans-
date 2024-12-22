//Lets code it--Shahid
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct {
    char title[100];
    char author[100];
    int year;
} Book;


Book *library = NULL;
int bookCount = 0;


void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}


void addBook() {
    bookCount++;
    library = realloc(library, bookCount * sizeof(Book));

    
    getchar();  
    fgets(library[bookCount - 1].title, 100, stdin);
    library[bookCount - 1].title[strcspn(library[bookCount - 1].title, "\n")] = '\0';  

    fgets(library[bookCount - 1].author, 100, stdin);
    library[bookCount - 1].author[strcspn(library[bookCount - 1].author, "\n")] = '\0';  

    scanf("%d", &library[bookCount - 1].year);
}


void displayBooks() {
    if (bookCount == 0) {
        printf("No books in the library.\n");
    } else {
        for (int i = 0; i < bookCount; i++) {
            printf("Title: %s, Author: %s, Year: %d\n", library[i].title, library[i].author, library[i].year);
        }
    }
}


void searchBook() {
    char searchTitle[100];
    getchar();  
    fgets(searchTitle, 100, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = '\0';  

    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        
        char titleLower[100];
        strcpy(titleLower, library[i].title);
        toLowerCase(titleLower);

        char searchLower[100];
        strcpy(searchLower, searchTitle);
        toLowerCase(searchLower);

        
        if (strstr(titleLower, searchLower)) {
            printf("Title: %s, Author: %s, Year: %d\n", library[i].title, library[i].author, library[i].year);
            found = 1;
        }
    }

    if (!found) {
        printf("No book found with the given title.\n");
    }
}

int main() {
    int choice;

    do {
        
        
        
        
        
        
        
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                printf("Book added successfully.\n");
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

    
    free(library);

    return 0;
}
