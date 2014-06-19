#include "Subtract.h"
#include <iostream>

Subtract::Subtract()
{
}

int Subtract::execute(int& a, int& b)
{
    std::cout << "Called Subtract's execute()" << std::endl;
    return a - b;
}

Subtract::~Subtract()
{
}

