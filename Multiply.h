#ifndef MULTIPLY_H
#define	MULTIPLY_H

#include "Strategy.h"

class Multiply : public Strategy
{
public:
    Multiply();
    virtual int execute(const int a, const int b);
    virtual ~Multiply();
private:

};

#endif	/* MULTIPLY_H */

