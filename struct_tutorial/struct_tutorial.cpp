// struct_tutorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
#include <string>

using namespace std;


struct Student
{
	int age;
	int STUDENTID;
	char year;

};
int main()
{
	srand(time(0));  // Initialize random number generator.
	int TotalStudents;
	
	//cout << "Please enter how many students you would like to add." << endl;
	//cin >> TotalStudents;
	Student Student;
	StudentVariables(Student);


	system("pause");
    return 0;
}
void printStudent(Student Person)
{
	cout << Person.age << endl;
	cout << Person.STUDENTID << endl;
	cout << Person.year << endl;
}
void StudentVariables(Student Person)
{
	cin >> Person.age;
	cin >> Person.STUDENTID;
	cin >> Person.year;
}
