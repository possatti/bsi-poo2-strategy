#include "Subtract.h"
#include <iostream>

Subtract::Subtract()
{
}

int Subtract::execute(int& a, int& b)
{
    std::cout << "Called Add's execute()";
    return a - b;
}

Subtract::~Subtract()
{
}

