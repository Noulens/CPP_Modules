#ifndef __DOG__HPP__
# define __DOG__HPP__

#include <string>
#include <iostream>
#include "colors.h"
#include "Animal.hpp"

class   Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        ~Dog();

        void        makeSound(void) const;
};

#endif
