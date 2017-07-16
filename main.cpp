#include <iostream>
#include <string>
#include "Student.h"
using namespace std;
/*
 *Created by AryaHajiTaheri 1518105
 */

void print(Student temp) {
	cout << "Student "<< temp.studnetID <<": Grade "<<  temp.studentGrade << endl;

}
int operator+(const int& first, const Student& next) {
	Student temp1;
	temp1.studentGrade = first + next.studentGrade;
	return  temp1.studentGrade;
}
int avgOf2(Student a, Student b);
int avgOf3(Student a, Student b, Student c);
int avgOf4(Student a, Student b, Student c, Student d);

int main() {
	Student x(1), y(2), z(3), q(4);
	int ARRAY_SIZE, GROUP_SIZE;
	int i= 0;
	int j = 0;
	while (i<1) {
		cout << "Enter the number of students: \n";
		cin >> ARRAY_SIZE;
		switch (ARRAY_SIZE)	{
		case 6: case 10: case 12:
			i++;
			break;
		default:
			cout << "invalid number\n";
			break;
		}
	}
	int * arrayA = new int[ARRAY_SIZE];
	
	while (j<1) {
		cout << "Enter the number of students in each group: \n";
		cin >> GROUP_SIZE;
		switch (GROUP_SIZE){
		case 2:case 3: case 4:
			j++;
			break;
		default:
			cout << "invalid number\n";
			break;
		}
	}
	try{
		if (ARRAY_SIZE%GROUP_SIZE != 0){
			string errorMessage = "\nERROR: CANNOT SPLIT STUDENTS EVENLY INTO GROUPS\n";
			throw errorMessage;
		}
	}
	catch (string message) {
		cout << message;
		system("pause");
		exit(0);
	}
	catch (...) { cout << "unknown error!\n"; exit (0); }
	switch (GROUP_SIZE){
	case 2:
		for (int i = 0; i < ARRAY_SIZE; i+=2) {
			cout << "\n";
			for (int j = 0; j < GROUP_SIZE;j++){}
			print(x);
			print(y);
			cout << "Group Average: =" << avgOf2(x,y);
		}
		break;
	case 3:
		for (int i = 0; i < ARRAY_SIZE; i+=3) {
			cout << "\n";
			for (int j = 0; j < GROUP_SIZE; j++) {}
			print(x);
			print(y);
			print(z);
			cout << "Group Average: =" << avgOf3(x, y,z);
		}
		break;
	case 4:
		for (int i = 0; i < ARRAY_SIZE; i+=4) {
			cout << "\n";
			for (int j = 0; j < GROUP_SIZE; j++) {}
			print(x);
			print(y);
			print(z);
			print(q);
			cout << "Group Average: =" << avgOf4(x, y,x,q);
		}
		break;
	default:
		cout << "invalid";
		break;
	}
	system("pause");
	return 0;
}
int avgOf2(Student a, Student b){
	return (a.genGrade() + b.genGrade()) *0.5;
}
int avgOf3(Student a, Student b, Student c){
	int temp = a.genGrade() + b.genGrade();
	temp += c.genGrade();
	return (temp) /3;
}
int avgOf4(Student a, Student b, Student c, Student d) {
	int temp = (a.genGrade() + b.genGrade());
	int temp1 = (c.genGrade() + d.genGrade());

	return (temp + temp1)/4;
}
