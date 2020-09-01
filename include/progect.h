#ifndef __PR_H_
#define __PR_H_

class Progect
{
protected:
    virtual float GetSalaryFromProgect() const = 0; 
    unsigned int m_pCoef;
public:
    Progect(unsigned int pCoef) : m_pCoef(pCoef) {};
};

#endif
