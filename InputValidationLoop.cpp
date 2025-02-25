//Activity 6
//Rudy Dumayan
//BSIT 1K
//Intprog
#include <iostream>
using namespace std;
int main() {
    
    float  num,ave, sum = 0.0;
    int val; 
    cout <<"Enter quarter: ";
    cin >> val;
    
    for (int i=1; i<= val; i++)
    {
    do
    {
    cout <<"Please enter a valid grade (60-100): ";
    cin >> num;
    }
    while (num<60 || num>100);
   sum = sum+num;
    }
    
    
    ave = sum/val;
    cout<<ave;

    return 0;
}
