//RUDY DUMAYAN 
//BSIT 1K
//ACTIVITY 14
#include<iostream>
using namespace std;

struct info {
  string name;
  string course;
  string section;
  int studentid;
};

int main()
{
info student1;
cout << "ENTER STUDENT1 NAME: ";
cin>> student1.name;
cout << "ENTER YOUR COURSE: ";
cin >> student1.course;
cout << "ENTER YOUR SECTION: ";
cin >> student1.section;
cout << "ENTER YOUR STUDENT ID: ";
cin >> student1.studentid;

info student2;
cout << "ENTER STUDENT2 NAME: ";
cin>>student2.name;
cout << "ENTER YOUR COURSE: ";
cin >> student2.course;
cout << "ENTER YOUR SECTION: ";
cin >> student2.section;
cout << "ENTER YOUR STUDENT ID: ";
cin >> student2.studentid;

info student3;
cout << "ENTER STUDENT3 NAME: ";
cin>> student3.name;
cout << "ENTER YOUR COURSE: ";
cin >> student3.course;
cout << "ENTER YOUR SECTION: ";
cin >> student3.section;
cout << "ENTER YOUR STUDENT ID: ";
cin >> student3.studentid;

info student4;
cout << "ENTER STUDENT4 NAME: ";
cin>>student4.name;
cout << "ENTER YOUR COURSE: ";
cin >> student4.course;
cout << "ENTER YOUR SECTION: ";
cin >> student4.section;
cout << "ENTER YOUR STUDENT ID: ";
cin >> student4.studentid;

info student5;
cout << "ENTER STUDENT5 NAME: ";
cin>>student5.name;
cout << "ENTER YOUR COURSE: ";
cin >> student5.course;
cout << "ENTER YOUR SECTION: ";
cin >> student5.section;
cout << "ENTER YOUR STUDENT ID: ";
cin >> student5.studentid;

cout << student1.name << " " << student1.course << " " << student1.section << " " << student1.studentid << " " <<endl;
cout << student2.name << " " << student2.course << " " << student2.section << " " << student2.studentid << " " <<endl;
cout << student3.name << " " << student3.course << " " << student3.section << " " << student3.studentid << " " <<endl;
cout << student4.name << " " << student4.course << " " << student4.section << " " << student4.studentid << " " <<endl;
cout << student5.name << " " << student5.course << " " << student5.section << " " << student5.studentid << " " <<endl;
    return 0;
}