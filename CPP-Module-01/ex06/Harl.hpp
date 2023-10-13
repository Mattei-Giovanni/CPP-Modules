#pragma once

#include <iostream>
#include <string>

class Harl
{
    public:
        Harl();
        ~Harl();
        void complain(int level);
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};