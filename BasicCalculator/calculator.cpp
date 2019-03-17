#include <iostream>
#include <stdexcept>
#include "calculator.h"

using std::cout;
using std::cin;

Calculator::Calculator()
{

}
Calculator::Calculator(double x, char ch, double y)
{
     num = x;
     sign = ch;
     num2 = y;
}
void Calculator::calcnums(double n, char c, double m)
{
     num = n;
     sign = c;
     num2 = m;
}
Calculator Calculator::operator+(const Calculator & c) const
{
    Calculator sum;
    sum.num = c.num + c.num2;
    return sum; 
}
Calculator Calculator::operator-(const Calculator & c) const
{
    Calculator diff;
    diff.num = c.num - c.num2;
    return diff;
}
Calculator Calculator::operator*(const Calculator & c) const
{
    Calculator product;
    product.num = c.num * c.num2;
    return product;
}
Calculator Calculator::operator/(const Calculator & c) const
{
    Calculator quotient;
    if (c.num2 == 0)
        throw std::runtime_error("Division by 0 is undefined.");
    quotient.num = c.num / c.num2;
    return quotient;
}
/*std::istream & operator>>(std::istream & is, const Calculator & c)
{
    cout << "Enter an integer: ";
   is->c.num;
    return is;
    
}*/
std::ostream & operator<<(std::ostream & os, const Calculator & c)
{
    if (c.sign == '+')
    {
        os << "Answer: " << c.num + c.num2 << " By Terrance Garrett\n";
        return os;
    }
    else if (c.sign == '-')
    {
        os << "Answer: " << c.num - c.num2 << " By Terrance Garrett\n";
        return os;
    }
    else if (c.sign == '*')
    {
        os << "Answer: " << c.num * c.num2 << " By Terrance Garrett\n";
        return os;
    }
    else if (c.sign == '/')
    {
        try 
        {
            if (c.num2 == 0)
                throw std::runtime_error("Division by 0 is undefined.");
            else if (c.num2 != 0)
            {
                os << "Answer: " << c.num / c.num2 << " By Terrance Garrett\n";
                return os;
            }
        } catch (std::runtime_error err)
        {
            std::cout << err.what() << "\nTry another integer." << std::endl;
        }
    }
    else if (c.sign == '^')
    {
        double pow;
        pow = c.num;
        if (c.num2 == 0)
            pow = 1;
        else if (c.num2 > 1)
            for (int i = 0; i < c.num2 - 1; i++)
                pow *= c.num;
        else if (c.num2 <= -1.0)
            for (double i = 0.0; i > c.num2; i--)
                pow *= 1 / c.num;
        os << "Answer: " << pow << " By Terrance Garrett\n";
        return os;
    }
}