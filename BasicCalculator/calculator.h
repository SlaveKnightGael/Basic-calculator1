#ifndef CALCULATOR_H_
#define CALCULATOR_H_

class Calculator
{
private:
    double num;
    double num2;
    char sign;
 
public:
    Calculator();
    Calculator(double x, char ch, double y);
    void calcnums(double n, char c, double m);
    Calculator operator+(const Calculator & c) const;
    Calculator operator-(const Calculator & c) const;
    Calculator operator*(const Calculator & c) const;
    Calculator operator/(const Calculator & c) const;
   // friend std::istream & operator>>(std::istream & is, const Calculator & c);
    friend std::ostream & operator<<(std::ostream & os, const Calculator & c);
};

#endif
