#pragma once

#include <iostream>

class Fixed
{
    private:
        int					fixedPointValue;
        static const int	fractionalBits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};