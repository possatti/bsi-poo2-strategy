#include "Add.h"
#include <iostream>

Add::Add()
{
}

int Add::execute(int& a, int& b)
{
    std::cout << "Called Add's execute()" << std::endl;
    return a + b;
}

Add::~Add()
{
}

