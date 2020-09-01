#ifndef __EMP_H_
#define __EMP_H_

#include <string>

class Employee
{
protected:
    unsigned int m_id;
    std::string  m_fio;
    unsigned int m_worktime;
    unsigned int m_payment;

public:
    Employee(unsigned int id = 0, std::string fio = "", 
             unsigned int worktime = 0, unsigned int payment = 0) : 
             m_id(id), m_fio(fio), m_worktime(worktime), m_payment(payment) {};

    void SetId(unsigned int& id) {m_id = id; };
    void SetFio(std::string&  fio) {m_fio = fio; };
    void SetWorktime(unsigned int& worktime) {m_worktime = worktime; };
    void SetPayment(unsigned int& payment) {m_payment = payment; };

    const unsigned int GetId() const {return m_id; };
    const std::string GetFio() const {return m_fio; };
    const unsigned int GetWorktime() const {return m_worktime; };
    const unsigned int GetPayment() const {return m_payment; };
    
    virtual float GetSalary() const = 0;
    virtual std::string GetType() const = 0;
};

#endif
