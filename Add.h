/* 
 * File:   Add.h
 * Author: phillipe
 *
 * Created on June 19, 2014, 3:01 PM
 */

#ifndef ADD_H
#define	ADD_H

#include "Strategy.h"

class Add : public Strategy
{
public:
    Add();
    virtual int execute(const int a, const int b);
    virtual ~Add();
};

#endif	/* ADD_H */

