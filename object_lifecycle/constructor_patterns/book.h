//  Add include guards using BOOK_H
#ifndef BOOK_H
#define BOOK_H
//  Declare the Book struct with:
// - char *title (pointer to dynamically allocated string)
// - int pages
typedef struct Book {
    char *title;
    int pages;
} Book;

//  Declare the create_book function that:
// - Takes a title string and page count
// - Returns a pointer to a newly created Book
Book *create_book(const char *title, const int pages);
//  Don't forget to close the include guard
#endif