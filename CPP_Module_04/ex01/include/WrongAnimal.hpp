#ifndef __WRONGANIMAL__HPP__
# define __WRONGANIMAL__HPP__

#include <string>
#include <iostream>
#include "colors.h"

class   WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        WrongAnimal &operator=(const WrongAnimal &src);
        virtual ~WrongAnimal(void);

        std::string         getType(void) const;
        virtual void        makeSound(void) const;
};

#endif
