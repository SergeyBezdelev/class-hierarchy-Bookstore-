#include "BookStore.h"

void BookStore::addBook(Book* book){
    if (count >= MAX_NUMBER_BOOKS) {
        std::cout << "library is full\n\n";
        return;
    }
    books[count++] = book;
}

bool BookStore::removeBook(int index){
    if (index < 0 || index >= count) 
        return false;
    delete books[index];
    for (int i = index; i < count - 1; i++)
        books[i] = books[i + 1];
    count--;
    return true;
}

void BookStore::displayBooks(){
    if (count == 0) std::cout << "No books available.\n";
    for (int i = 0; i < count; i++) {
        books[i]->display();
        std::cout << "\n";
    }
}

int BookStore::getCount() const{
    return count;
}
