#include "Context.h"
#include "Strategy.h"

Context::Context(Strategy* strategy)
{
    this->strategy = strategy;
}

int Context::executeStrategy(const int a, const int b)
{
    return this->strategy->execute(a, b);
}

Context::~Context()
{
    this->strategy->~Strategy();
}

