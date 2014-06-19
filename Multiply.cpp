#include "Multiply.h"
#include <iostream>

Multiply::Multiply()
{
}

int Multiply::execute(int& a, int& b)
{
    std::cout << "Called Add's execute()";
    return a * b;
}

Multiply::~Multiply()
{
}

