Cat::Cat(): _type(BLUE + "cat" + RESET)
{
    std::cout << "cat default constructor called for " << getType() << std::endl;
}

Cat::Cat(const Cat &src)
{
    *this = src;
    std::cout << "cat copy constructor called for " << getType() << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    this->_type = src._type;
    std::cout << "cat copy assignment called for " << getType() << std::endl;
    return (*this);
}

~Cat::Cat();
{
    std::cout << "cat destructor called for " << getType() << std::endl;
}

std::string Cat::getType(void)
{
    return (this->_type);
}

void        Cat::makeSound(void)
{
    std::cout << getType() << ": miaou" << std::endl;
}
