#include "main.h"

int main ()
{
    Destructible shield{"Shield", 10, Type::january};


    std::cout << shield << "\n";
    ++shield;
    std::cout << shield << "\n";
    --shield;
    std::cout << shield << "\n";
}

ostream& operator<< (ostream& outStream, const Destructible& obj)
{
    outStream << obj.name << " gives " << obj.hitPoints;
    return outStream;
}

void Destructible::operator++ ()
{
    ++hitPoints;
}

void Destructible::operator-- ()
{
    --hitPoints;
}

