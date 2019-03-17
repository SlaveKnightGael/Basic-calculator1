#include <iostream>
#include "calculator.h"
using std::cout;
using std::cin;
using std::endl;

void calcotrice();



int main()
{
    char c;
    cout << "Hello! Would you like to use the calculator? (q to quit) ";
    while ((cin >> c) && c != 'q')
    {
        calcotrice();
        cout << "Would you like to use the calculator again? (y for yes q to quit): ";
    }
    cout << "Thank you for using the Calculator. Bye\n";

    return 0;
}
void calcotrice()
{
    double dx;
    double dy;
    char s;
    cout << "Enter an integer: ";
    cin >> dx;
    cout << "Enter an arithmetic operator (+, -, *, /, ^, !): ";
    cin >> s;
    if (s == '!')
    {
        Calculator factCalc(dx, s);
        Calculator result;
        result = factCalc;
        cout << result;
    }
    else
    {
        cout << "Enter another integer: ";
        cin >> dy;
        Calculator arthmCalc(dx, s, dy);
        Calculator result;
        result = arthmCalc;
        cout << result;
    }
}