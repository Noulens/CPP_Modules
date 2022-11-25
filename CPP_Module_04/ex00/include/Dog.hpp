#ifndef __DOG__HPP__
# define __DOG__HPP__

class   Dog: public Animal
{
    protected:
        std::string _type;
    public:
        Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        ~Dog();

        std::string getType(void);
        void        makeSound(void);
};

#endif
