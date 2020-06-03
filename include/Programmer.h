#ifndef LAB6_PROGRAMMER_H
#define LAB6_PROGRAMMER_H

#include <utility>

#include "Engineer.h"

class Programmer: public Engineer
{
public:
    Programmer(unsigned int new_id, std::string new_name, unsigned int new_worktime, unsigned int new_base, unsigned int new_bonus):
    Engineer(new_id, std::move(new_name), new_worktime, new_base, new_bonus) {};
};

#endif //LAB6_PROGRAMMER_H
