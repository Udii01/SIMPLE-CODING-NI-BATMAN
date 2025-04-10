// ACTIVITY 10
// BSIT-1K
// DUMAYAN, RUDY P.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string arrnames[10] = {"Ramon", "Clark", "Cardo", "Aliyah", "Mark", 
                           "Darlene", "Vianca", "Kim", "Kyle", "Crystelle"};
                           
    for (int i = 0; i < 10; ++i){
        string *ptr = &arrnames[i];
    cout << "Name" << i + 1 << " address: " << ptr 
             << " The Value: " << *ptr << endl;
    }
    
    for (int i = 0; i < 10; ++i){
    string *ptr = &arrnames[i];
    cout << "Enter New Ten Names: ";
    cin >> *ptr;
    }
    
    for (int i = 0; i <10; ++i){
    string *ptr = &arrnames[i];
    cout << " The new name" << i + 1 <<": "<< *ptr<< endl;
    }
    
    
    return 0;
}