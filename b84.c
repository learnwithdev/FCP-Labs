#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

void readAndDisplayBookInfo(struct Book *book) {
    printf("Enter the book title: ");
    fgets(book->title, sizeof(book->title), stdin);
    
    printf("Enter the book author: ");
    fgets(book->author, sizeof(book->author), stdin);
    
    printf("Enter the book price: ");
    scanf("%f", &book->price);
    
    printf("\nBook Information:\n");
    printf("Title: %s", book->title);
    printf("Author: %s", book->author);
    printf("Price: %.2f\n", book->price);
}

int main() {
    struct Book book;
    struct Book *bookPtr = &book;

    readAndDisplayBookInfo(bookPtr);
}
