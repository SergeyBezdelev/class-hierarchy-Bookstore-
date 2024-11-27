#include "FictionBook.h"

FictionBook::FictionBook(std::string _title, std::string _author, std::string _publisher, int _year, std::string _genre)
    : Book(_title, _author, _publisher, _year), genre(_genre) {}

void FictionBook::display(){
    std::cout << "Title: " << title << "\n";
    std::cout << "Author: " << author << "\n";
    std::cout << "Publisher: " << publisher << "\n";
    std::cout << "Year: " << year << "\n";
    std::cout << "Genre: " << genre << "\n";
}