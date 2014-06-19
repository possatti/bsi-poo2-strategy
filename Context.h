#ifndef CONTEXT_H
#define	CONTEXT_H

class Strategy;

class Context
{
public:
    Context(Strategy* strategy);
    int executeStrategy(int& a, int& b);
    virtual ~Context();
private:
    Strategy* strategy;
};

#endif	/* CONTEXT_H */

