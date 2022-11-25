
#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->_type = (BLUE "Cat" RESET);
    std::cout << "cat default constructor called for " << Animal::getType() << std::endl;
}

Cat::Cat(const Cat &src)
{
    *this = src;
    std::cout << "cat copy constructor called for " << Animal::getType() << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    this->_type = src._type;
    std::cout << "cat copy assignment called for " << Animal::getType() << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "cat destructor called for " << Animal::getType() << std::endl;
}

void        Cat::makeSound(void) const
{
    std::cout << Animal::getType() << ": miaou" << std::endl;
}
