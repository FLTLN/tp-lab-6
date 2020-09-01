#ifndef __TEAMLEADER_H_
#define __TEAMLEADER_H_

#include "engineer.h"
#include "heading.h"

class TeamLeader : public Engieneer, public Heading
{
protected:
    float GetSalaryFromWorktime() const { return m_worktime * m_payment; };
    float GetSalaryFromProgect() const { return m_pCoefCount * m_pCoef; };
    float GetSalaryFromHeading() const { return m_hCoefCount * m_hCoef; };
public:
    TeamLeader(unsigned int id = 0, std::string fio = "", 
              unsigned int worktime = 0, unsigned int payment = 0, 
              unsigned int pCoef = 0, unsigned int pCoefCount = 0,
              unsigned int hCoef = 0, unsigned int hCoefCount = 0) 
              : Engieneer(id, fio, worktime, payment, pCoef, pCoefCount), Heading(hCoef), m_hCoefCount(hCoefCount) {};
    float GetSalary() const { return GetSalaryFromWorktime() + GetSalaryFromProgect() + GetSalaryFromHeading(); };
    std::string GetType() const { return "teamleader"; };
private:
    unsigned int m_hCoefCount;
};

#endif