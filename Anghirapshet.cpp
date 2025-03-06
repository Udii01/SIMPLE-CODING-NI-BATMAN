//Rudy Dumayan 
//BSIT 1K
//ACT 15
#include <iostream>
using namespace std;

struct student {
    string name;
    double grade;
};

int main() {
    float num, ave, sum;
    int val;

    student students[5];

    for (int i = 0; i < 5; i++) {
        cout << "THE STUDENT " << i + 1 << endl;
        
        cout << "Name: ";
        cin>> students[i].name;

        cout << "CALCULATE THE GRADE" << endl;
        cout << "Enter number of quarters: ";
        cin >> val;

        sum = 0.0;

        for (int a = 1; a <= val; a++) {
            do {
                cout << "Valid grade (60-100) for quarter " << a << ": ";
                cin >> num;
            } while (num < 60 || num > 100);

            sum += num;
        }

        ave = sum / val;
        students[i].grade = ave;
        cout <<students[i].name << " Grade is " << ave << endl << endl;
    }
    
    int topStudent = 0;

    for (int i = 1; i < 5; i++) {
        if (students[i].grade > students[topStudent].grade) {
            topStudent = i;
        }
    }

    cout << "The student with the highest grade is: " << students[topStudent].name;
    cout << " with a grade of " << students[topStudent].grade << endl;
    return 0;
}