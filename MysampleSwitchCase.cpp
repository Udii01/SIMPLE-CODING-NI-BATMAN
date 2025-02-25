//Activity 5
//Rudy Dumayan
//BSIT
//INTPROG
#include <iostream>
using namespace std;
#include <string>

int main()
{
    char sign;
    double num1, num2, plus, minus, divide, multiply;

    cout << "Enter  1st number: ";
    cin >> num1;
    cout << "Enter  2st number: ";
    cin >> num2;
    cout << "Enter  an operator:  ";
    cin >> sign;

    multiply = num1 * num2;
    divide = num1 / num2;
    plus = num1 + num2;
    minus = num1 - num2;

    switch (sign)
    {
    case '+':
        cout << plus;
        break;

    case '-':
        cout << minus;
        break;

    case '*':
        cout << multiply;
        break;

    case '/':
        cout << divide;
        break;

    default:
        cout << "Invalid!";
        break;
    }
    return 0;
}