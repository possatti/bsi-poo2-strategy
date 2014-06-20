#include "Context.h"
#include "Strategy.h"

Context::Context(Strategy* strategy) : strategy(strategy)
{
}

int Context::executeStrategy(const int a, const int b) const
{
    return this->strategy->execute(a, b);
}

Context::~Context()
{
    this->strategy->~Strategy();
}

