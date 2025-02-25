//Activity 7
//Rudy Dumayan
//BSIT 1K
#include <iostream>
using namespace std;

int main() {
    int sides1, sides2, sides3;

    cout << "Input side 1: ";
    cin >> sides1;
    cout << "Input side 2: ";
    cin >> sides2;
    cout << "Input side 3: ";
    cin >> sides3;

    if (sides1 + sides2 <= sides3) 
    {
        cout << "Invalid Triangle" << endl;
    }
    
    else if (sides1 == sides2 && sides2 == sides3) 
    {
        cout << "Equilateral Triangle" << endl;
    } 
    
    else if (sides1 == sides2 || sides1 == sides3 || sides2 == sides3)
    {
        cout << "Isosceles Triangle" << endl;
    } 
    
    else 
        cout << "Scalene Triangle" << endl;
    

    return 0;
}