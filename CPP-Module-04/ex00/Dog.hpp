#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &copy);
        virtual ~Dog();

        Dog &operator=(const Dog &copy);

        virtual void makeSound() const;
};