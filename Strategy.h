/* 
 * File:   Strategy.h
 * Author: phillipe
 *
 * Created on June 19, 2014, 2:58 PM
 */

#ifndef STRATEGY_H
#define	STRATEGY_H

class Strategy
{
public:
    Strategy();
    virtual int execute(const int a, const int b) = 0;
    virtual ~Strategy();
};

#endif	/* STRATEGY_H */

