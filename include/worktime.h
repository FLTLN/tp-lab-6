#ifndef __WT_H_
#define __WT_H_

class Worktime
{
protected:
    virtual float GetSalaryFromWorktime() const = 0; 
public:
    Worktime() {};
};
#endif
