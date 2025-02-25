//RUDY DUMAYAN
//BSIT1K
//ACT 12
#include<iostream>
using namespace std;
void displayName(){
string name;
cout<<"Enter the name of the user: ";
cin>>name;
cout<<" Hello! "<<name<<endl;
}

int add(int num1, int num2){
return (num1 + num2);
}
int subtract(int num1, int num2){
return (num1 - num2);
}
int multiply(int num1, int num2){
return (num1 * num2);
}
double divide(int num1, int num2){
if (num2 != 0)
return num1/num2;
}
int getModulus(int num1, int num2){
return (num1 % num2);
}

int main(){
displayName();

int num1, num2, summation, subtraction,multiplication, division,modulus;
cout<<"Enter two numbers:"<<endl;
cout<<"First num: ";
cin>>num1;
cout<<"Second num: ";
cin>>num2;

    
   summation = add(num1,num2);
   subtraction = subtract(num1,num2);
   multiplication = multiply(num1,num2);
   division = divide(num1,num2);
   modulus = getModulus(num1,num2);
    cout<<"The sum of two numbers is: "<<summation<<endl;
   cout<<"The subtract of two numbers is: "<<subtraction<<endl;
   cout<<"The multiply of two numbers is: "<<multiplication<<endl;
   cout<<"The divide of two numbers is: "<<division<<endl;
   cout<<"The modulus of two numbers is: "<<modulus<<endl;
    
    
    return 0;
}