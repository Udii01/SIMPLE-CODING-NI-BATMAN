//RUDY DUMAYAN
//BSIT 1K
//ACT 14
#include<iostream>
#include <string>
using namespace std;

struct info 
{
    string name;
    string course;
    int studentid;
};

int main()
{
    info students[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "STUDENT INFO " << i + 1 << endl;
        
        cout << "Enter Name: ";
        getline(cin,students[i].name);
        cout << "Enter Course: ";
        cin >> students[i].course;
        cin.ignore();
        cout << "Enter Student ID: ";
        cin >> students[i].studentid;
        cin.ignore();
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "STUDENT " << i + 1 << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Course: " << students[i].course << endl;
        cout << "Student ID: " << students[i].studentid << endl;
    }

    return 0;
}