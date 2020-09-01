#ifndef __PER_H_
#define __PER_H_

#include "employee.h"
#include "worktime.h"

class Personal : public Employee, public Worktime
{
protected:
    float GetSalaryFromWorktime() const { return m_worktime * m_payment; };
public:
    Personal(unsigned int id = 0, std::string fio = "", 
             unsigned int worktime = 0, unsigned int payment = 0) : Employee(id, fio, worktime, payment) {};
    float GetSalary() const { return GetSalaryFromWorktime(); };
};

#endif
