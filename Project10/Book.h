#pragma once
#include <string>
#include <iostream>

class Book
{
protected:
    std::string title;
    std::string author;
    std::string publisher;
    int year;

public:
    Book(std::string _title, std::string _author, std::string _publisher, int _year)
        : title(_title), author(_author), publisher(_publisher), year(_year)
    {}
    virtual void display() = 0;
    virtual ~Book() {}
};
