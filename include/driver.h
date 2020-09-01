#ifndef __DRIVER_H_
#define __DRIVER_H_

#include "personal.h"

class Driver : public Personal
{
public:
    Driver(unsigned int id = 0, std::string fio = "", 
            unsigned int worktime = 0, unsigned int payment = 0) : Personal(id, fio, worktime, payment) {};
    std::string GetType() const { return "driver"; };
};

#endif
