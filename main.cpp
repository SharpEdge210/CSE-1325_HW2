#include <iostream>
#include "student.cpp"
using namespace std;

int main(){
	
	double grade;
	string name;

	cout << "\nWhat is your name? " << endl;
	getline(cin, name);
	Student student(name);

	// collects grades until grade entered is less than 0 (such as -1)
	cout << "\nEnter Exam grade: ";
	cin >> grade;
	while(grade >= 0){
		student.exam(grade);
		cout << "Enter Exam grade: ";
		cin >> grade;
	};
	
	// collects grades until grade entered is less than 0 (such as -1)
	cout << "\nEnter Homework grade: ";
	cin >> grade;
	while(grade >= 0){
		student.homework(grade);
		cout << "Enter Homework grade: ";
		cin >> grade;
	};


	cout << "\n" << student.name() << " has an average of " << student.average() << '!' << endl;

	return 0;
}
