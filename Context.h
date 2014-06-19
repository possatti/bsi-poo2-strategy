#ifndef CONTEXT_H
#define	CONTEXT_H

class Strategy;

class Context
{
public:
    Context(Strategy* strategy);
    int executeStrategy(const int a, const int b);
    virtual ~Context();
private:
    Strategy* strategy;
};

#endif	/* CONTEXT_H */

