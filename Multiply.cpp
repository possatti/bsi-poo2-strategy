#include "Multiply.h"
#include <iostream>

Multiply::Multiply()
{
}

int Multiply::execute(int& a, int& b)
{
    std::cout << "Called Multiply's execute()" << std::endl;
    return a * b;
}

Multiply::~Multiply()
{
}

