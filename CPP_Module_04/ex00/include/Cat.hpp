#ifndef __CAT__HPP__
# define __CAT__HPP__

class   Cat: public Animal
{
    protected:
        std::string _type;
    public:
        Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &src);
        ~Cat();

        std::string getType(void);
        void        makeSound(void);
};

#endif
