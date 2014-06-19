#include "Context.h"
#include "Strategy.h"

Context::Context(Strategy* strategy)
{
    this->strategy = strategy;
}

int Context::executeStrategy(int& a, int& b)
{
    return this->strategy->execute(a, b);
}

Context::~Context()
{
    this->strategy->~Strategy();
}

