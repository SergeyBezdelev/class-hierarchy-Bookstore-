#include "Book.h"

class FictionBook : public Book{
private:
    std::string genre;

public:
    FictionBook(std::string , std::string , std::string , int , std::string );
    void display();
};
