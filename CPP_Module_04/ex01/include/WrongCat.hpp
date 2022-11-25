#ifndef __WRONGCAT__HPP__
# define __WRONGCAT__HPP__

#include <string>
#include <iostream>
#include "colors.h"
#include "WrongAnimal.hpp"

class   WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &src);
        WrongCat &operator=(const WrongCat &src);
        ~WrongCat();

        void        makeSound(void) const;
};

#endif
