#include "Book.h"
#define MAX_NUMBER_BOOKS 5

class BookStore
{
private:
    Book* books[MAX_NUMBER_BOOKS];
    int count=0;

public:
    void addBook(Book* book);
    bool removeBook(int index);
    void displayBooks();
    int getCount() const;
};