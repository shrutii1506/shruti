#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book library[100];
    int count = 0, choice, i;

    do {
        printf("\nLibrary Menu:\n1. Add Book\n2. Display Books\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter Book ID: ");
            scanf("%d", &library[count].id);
            printf("Enter Title: ");
            scanf(" %[^\n]", library[count].title);
            printf("Enter Author: ");
            scanf(" %[^\n]", library[count].author);
            count++;
        } else if(choice == 2) {
            printf("\nBooks in Library:\n");
            for(i = 0; i < count; i++) {
                printf("ID: %d | Title: %s | Author: %s\n", 
                        library[i].id, library[i].title, library[i].author);
            }
        }
    } while(choice != 3);

    return 0;
}
