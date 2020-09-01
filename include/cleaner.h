#ifndef __CLEAN_H_
#define __CLEAN_H_

#include "personal.h"

class Cleaner : public Personal
{
public:
    Cleaner(unsigned int id = 0, std::string fio = "", 
            unsigned int worktime = 0, unsigned int payment = 0) : Personal(id, fio, worktime, payment) {};
    std::string GetType() const { return "cleaner"; };
};

#endif
