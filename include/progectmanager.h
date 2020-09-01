#ifndef __PProgectManager_H_
#define __PProgectManager_H_

#include "heading.h"
#include "manager.h"

class ProgectManager : public Manager, public Heading
{
protected:
    float GetSalaryFromHeading() const { return m_hCoefCount * m_hCoef; };
    unsigned int m_hCoefCount;
public:
    ProgectManager(unsigned int id = 0, std::string fio = "", 
            unsigned int pCoef = 0, unsigned int pCoefCount = 0, 
            unsigned int hCoef = 0, unsigned int hCoefCount = 0) 
            : Manager(id, fio, pCoef, pCoefCount), Heading(hCoef), m_hCoefCount(hCoefCount) {};
    float GetSalary() const { return GetSalaryFromProgect() + GetSalaryFromHeading(); };
    std::string GetType() const { return "progectmaneger"; };
};

#endif