#ifndef __WRONGANIMAL__HPP__
# define __WRONGANIMAL__HPP__

class   WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        WrongAnimal &operator=(const WrongAnimal &src);
        ~WrongAnimal();

        std::string getType(void);
        void        makeSound(void);
};

#endif
