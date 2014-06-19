#include "Multiply.h"
#include <iostream>

Multiply::Multiply()
{
}

int Multiply::execute(const int a, const int b)
{
    std::cout << "Called Multiply's execute()" << std::endl;
    return a * b;
}

Multiply::~Multiply()
{
}

