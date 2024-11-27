#include "Book.h"

class NonFictionBook : public Book
{
private:
    std::string topic;

public:
    NonFictionBook(std::string , std::string , std::string , int , std::string );
    void display();
};
