#ifndef SUBTRACT_H
#define	SUBTRACT_H

#include "Strategy.h"

class Subtract : public Strategy
{
public:
    Subtract();
    virtual int execute(const int a, const int b);
    virtual ~Subtract();
};

#endif	/* SUBTRACT_H */

