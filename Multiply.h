#ifndef MULTIPLY_H
#define	MULTIPLY_H

#include "Strategy.h"

class Multiply : public Strategy
{
public:
    Multiply();
    virtual int execute(int& a, int& b);
    virtual ~Multiply();
private:

};

#endif	/* MULTIPLY_H */

