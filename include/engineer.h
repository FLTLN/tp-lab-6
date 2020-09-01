#ifndef __ENG_H_
#define __ENG_H_

#include "employee.h"
#include "worktime.h"
#include "progect.h"

class Engieneer : public Employee, public Worktime, public Progect
{
protected:
    float GetSalaryFromWorktime() const { return m_worktime * m_payment; };
    float GetSalaryFromProgect() const { return m_pCoefCount * m_pCoef; };
    unsigned int m_pCoefCount;
public:
    Engieneer(unsigned int id = 0, std::string fio = "", 
              unsigned int worktime = 0, unsigned int payment = 0, 
              unsigned int pCoef = 0, unsigned int pCoefCount = 0) 
              : Employee(id, fio, worktime, payment), Progect(pCoef), m_pCoefCount(pCoefCount) {};
    float GetSalary() const { return GetSalaryFromWorktime() + GetSalaryFromProgect(); };
};

#endif