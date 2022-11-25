WrongCat::WrongCat(): _type(DARK_BLUE + "wrong cat" + RESET)
{
    std::cout << "Wrong cat default constructor called for " << getType() << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
    *this = src;
    std::cout << "Wrong cat copy constructor called for " << getType() << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    this->_type = src._type;
    std::cout << "Wrong cat copy assignment called for " << getType() << std::endl;
    return (*this);
}

~WrongCat::WrongCat();
{
    std::cout << "Wrong cat destructor called for " << getType() << std::endl;
}

std::string WrongCat::getType(void)
{
    return (this->_type);
}

void        WrongCat::makeSound(void)
{
    std::cout << getType() << ": wrong miaou" << std::endl;
}
