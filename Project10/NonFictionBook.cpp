#include "NonFictionBook.h"

NonFictionBook::NonFictionBook(std::string _title, std::string _author, std::string _publisher, int _year, std::string _topic)
    : Book(_title, _author, _publisher, _year), topic(_topic) {}

void NonFictionBook::display()
{
    std::cout << "Title: " << title << "\n";
    std::cout << "Author: " << author << "\n";
    std::cout << "Publisher: " << publisher << "\n";
    std::cout << "Year: " << year << "\n";
    std::cout << "Topic: " << topic << "\n";
}