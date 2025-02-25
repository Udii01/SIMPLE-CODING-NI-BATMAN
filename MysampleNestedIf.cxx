//Activity 3
//Rudy Dumayan
//BSIT 2K
//Intprog
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int year;
	cout << "Enter a year: "; 
	cin>> year;
	
	
	if (year>=2100)
	{
	    if (year % 400 == 0)
	cout << year <<" is a leap year.";
	
	else 
	cout << year << " is not a leap year.";
	}
	
	else	if (year<=1900)
	{
	    if (year % 400 == 0)
	cout << year <<" is a leap year.";
	
	else 
	cout << year << " is not a leap year.";
	}
	
 else if (year % 4 == 0)
 cout << year << " is a leap year.";
 else 
 cout << year << " is not a leap year.";
	
	return 0;
}