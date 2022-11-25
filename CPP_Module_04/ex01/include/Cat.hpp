#ifndef __CAT__HPP__
# define __CAT__HPP__

#include <string>
#include <iostream>
#include "colors.h"
#include "Animal.hpp"

class   Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &src);
        ~Cat();

        void        makeSound(void) const;
};

#endif
