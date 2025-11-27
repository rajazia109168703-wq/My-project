// include iostream library for input/output operations
#include<iostream>

using namespace std;

int main ()

{
// Declare variables
string name;
int rollno;
string department;
float english, math, physics;

//Get student information name, rollno, & department name.

cout << "Enter Student Name:\t"; getline(cin, name);
cout << "Enter Roll Number:\t"; cin >> rollno; cin.ignore();
cout << "Enter Department:\t"; getline(cin, department);

//Get obtained marks of student in these subject 

cout << "Enter Marks in English:\t" ; cin >> english;
cout << "Enter Marks in Math:\t" ; cin >> math;
cout << "Enter Marks in Physics:\t"; cin >> physics;

//return 0 to indicate successful execution of the program.
return 0;

}