//Реализовать иерархию классов «Книжный магазин»
#include "FictionBook.h"
#include "NonFictionBook.h"
#include "BookStore.h"

int main(void){
    BookStore store;
    FictionBook* fb1 = new FictionBook("The Tale of the Fisherman and the Fish", "Alexander Sergeevich Pushkin",
        "Children's Library", 2008, "Fairy tale");
    NonFictionBook* nfb1 = new NonFictionBook("The quantum physics", "A.G. Volkov, A.A. Povzner",
        "UrFU", 2017, "Scientific literature");
    store.addBook(fb1);
    store.addBook(nfb1);
    store.displayBooks();
    int number = 0; 
    std::cout << "delete book number: ";
    std::cin >> number;
    std::cout << std::endl;
    if(store.removeBook(--number)) store.displayBooks();
    else std::cout << "Invalid index.\n";
}