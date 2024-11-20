/*
84.WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION USING POINTER
 TO STRUCTURE.
*/
#include<stdio.h>
#include<string.h>

struct book {
    char name[50];
    float price;
    char author[50];
};

int main() {
    int n;
    printf("Enter how many book details to input: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character left by scanf

    struct book books[n]; // Array of books

    // Read the book details
    for (int i = 0; i < n; i++) {
        printf("\nEnter book %d details:\n", i + 1);

        printf("Book name: ");
        fgets(books[i].name, sizeof(books[i].name), stdin);
        books[i].name[strcspn(books[i].name, "\n")] = 0; // Remove newline character from the string

        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar(); // To consume the newline character left by scanf

        printf("Author name: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0; // Remove newline character from the string

        printf("\n***********************************\n");
    }

    // Pointer to structure to display book details
    struct book *ptr;
    
    // Display the book details using pointer
    printf("\nDisplaying the details of the books:\n");
    for (int i = 0; i < n; i++) {
        ptr = &books[i]; // Point to the current book

        printf("\nBook %d details:\n", i + 1);
        printf("Name: %s\n", ptr->name);
        printf("Price: %.2f\n", ptr->price);
        printf("Author: %s\n", ptr->author);
        printf("\n***********************************\n");
    }

    return 0;
}


