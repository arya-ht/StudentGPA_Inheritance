#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Student.h"


/*
 *Created by AryaHajiTaheri 1518105
 */

Student::Student()
{
}
Student::Student(int tempID) {
	this->studnetID = tempID;
}

Student::~Student()
{
}
int Student::genGrade() {

studentGrade = rand() % 100 +0;

	return studentGrade;
}


