#include <iostream>
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
        os << "Answer: " << c.num / c.num2 << " By Terrance Garrett\n";
        return os;
    }
}