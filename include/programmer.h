#ifndef __PROGRAMMER_H_
#define __PROGRAMMER_H_

#include "engineer.h"

class Programmer : public Engieneer
{
public:
    Programmer(unsigned int id = 0, std::string fio = "", 
              unsigned int worktime = 0, unsigned int payment = 0, 
              unsigned int pCoef = 0, unsigned int pCoefCount = 0) 
              : Engieneer(id, fio, worktime, payment, pCoef, pCoefCount) {};
    std::string GetType() const { return "programmer"; };
};

#endif
