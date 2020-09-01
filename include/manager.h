#ifndef __MANAGER_H_
#define __MANAGER_H_

#include "employee.h"
#include "progect.h"

class Manager : public Employee, public Progect
{
protected:
    float GetSalaryFromProgect() const { return m_pCoefCount * m_pCoef; };
    unsigned int m_pCoefCount;
public:
    Manager(unsigned int id = 0, std::string fio = "", 
            unsigned int pCoef = 0, unsigned int pCoefCount = 0) 
            : Employee(id, fio), Progect(pCoef), m_pCoefCount(pCoefCount) {};
};

#endif