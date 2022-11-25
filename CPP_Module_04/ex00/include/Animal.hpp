#ifndef __ANIMAL__HPP__
# define __ANIMAL__HPP__

class   Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &src);
        ~Animal();

        std::string getType(void);
        void        makeSound(void);
};

#endif
