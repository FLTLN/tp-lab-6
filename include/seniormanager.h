#ifndef __SeniorManager_H_
#define __SeniorManager_H_

#include "progectmanager.h"

class SeniorManager : public ProgectManager
{
protected:
public:
    SeniorManager(unsigned int id = 0, std::string fio = "", 
            unsigned int pCoef = 0, unsigned int pCoefCount = 0, 
            unsigned int hCoef = 0, unsigned int hCoefCount = 0) 
            : ProgectManager(id, fio, pCoef, pCoefCount, hCoef, hCoefCount) {};
            
    float GetSalary() const { return (GetSalaryFromProgect() + GetSalaryFromHeading()) * 1.5; };
    std::string GetType() const { return "seniormanager"; };
};

#endif