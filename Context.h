#ifndef CONTEXT_H
#define	CONTEXT_H

class Strategy;

class Context
{
private:
    const Strategy * const strategy;
public:
    Context(Strategy* strategy);
    int executeStrategy(const int a, const int b) const;
    virtual ~Context();
};

#endif	/* CONTEXT_H */

