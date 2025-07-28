#include<iostream>
#include<string_view>

struct Cat
{
    std::string_view name{"Cat"};
    int numLegs{4};
};

struct Dog
{
    std::string_view name{"Dog"};
    int numLegs{4};
};

struct Chicken
{
    std::string_view name{"Chiken"};
    int numLegs{2};
};
struct Snake 
{
    std::string_view name{"Snake"};
    int numLegs{0};
};

int main()
{
    constexpr Snake animal;
    std::cout<< animal.name << ' '<< animal.numLegs;

    return 0;

}