#ifndef __WRONGCAT__HPP__
# define __WRONGCAT__HPP__

class   WrongCat: public WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongCat();
        WrongCat(const WrongCat &src);
        WrongCat &operator=(const WrongCat &src);
        ~WrongCat();

        std::string getType(void);
        void        makeSound(void);
};

#endif
