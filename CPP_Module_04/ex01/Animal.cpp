

#include "Animal.hpp"

Animal::Animal(): _type(WHITE  "abstract animal"  RESET)
{
    std::cout << "animal default constructor called for " << getType() << std::endl;
}

Animal::Animal(const Animal &src)
{
    *this = src;
    std::cout << "animal copy constructor called for " << getType() << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
    this->_type = src._type;
    std::cout << "animal copy assignment called for " << getType() << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "animal destructor called for " << getType() << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void        Animal::makeSound(void) const
{
    std::cout << getType() << ": * abstract noises *" << std::endl;
}
