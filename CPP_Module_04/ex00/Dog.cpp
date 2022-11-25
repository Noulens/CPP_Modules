Dog::Dog(): _type(GREEN + "dog" + RESET)
{
    std::cout << "dog default constructor called for " << getType() << std::endl;
}

Dog::Dog(const Dog &src)
{
    *this = src;
    std::cout << "dog copy constructor called for " << getType() << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    this->_type = src._type;
    std::cout << "dog copy assignment called for " << getType() << std::endl;
    return (*this);
}

~Dog::Dog();
{
    std::cout << "dog destructor called for " << getType() << std::endl;
}

std::string Dog::getType(void)
{
    return (this->_type);
}

void        Dog::makeSound(void)
{
    std::cout << getType() << ": wouf" << std::endl;
}
