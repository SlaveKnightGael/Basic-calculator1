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
    Calculator(double x, char ch);
    void calcnums(double n, char c, double m);
    void calcnums(double n, char c);
    Calculator operator+(const Calculator & c) const;
    Calculator operator-(const Calculator & c) const;
    Calculator operator*(const Calculator & c) const;
    Calculator operator/(const Calculator & c) const;
    friend std::ostream & operator<<(std::ostream & os, const Calculator & c);
};

#endif
