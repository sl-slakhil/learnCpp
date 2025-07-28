#include<iostream>


struct Date
{
    int day{};
    int month{};
    int year{};
};

void printDate(const Date& date)
{
    std::cout<<date.day<<'/'<< date.month<<'/'<< date.year;
}

int main()
{
    Date date{4, 10, 21};
    printDate(date);

    return 0;
}