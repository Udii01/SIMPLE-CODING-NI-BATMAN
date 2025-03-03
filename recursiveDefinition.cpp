#include <iostream>
using namespace std;

int num (int n) 
{  
if (n <= 1) 
{ 
return n;
} else 
{  
return num (n-1) + num (n-2);
}
}

int main() 
{  
int n;
cout <<"Enter the number of terms: ";
cin >> n;
cout <<"Fibonacci Series: ";

{
for (int i = 0; i < n; i++) 
cout << num (i) <<" ";
}

  return 0;
}