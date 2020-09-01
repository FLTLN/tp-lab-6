#ifndef __HEADING_H_
#define __HEADING_H_

class Heading
{
protected:
    virtual float GetSalaryFromHeading() const = 0; 
    unsigned int m_hCoef;
public:
    Heading(unsigned int hCoef) : m_hCoef(hCoef) {};
};

#endif
