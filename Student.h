#pragma once
/*
 *Created by AryaHajiTaheri 1518105
 */

class  Student
{
public:
	 Student();
	 Student(int tempID);
	 ~Student();
	 int genGrade();
	 friend void print( Student temp);
	 Student operator+(const Student& next){
		 Student tempgrade;
		 tempgrade.studentGrade = this->studentGrade + next.studentGrade;
		 return studentGrade;
	 }
	 friend int operator+(const int& first, const Student& next);
	 friend int avgOf2(Student a, Student b);
	 friend int avgOf3(Student a, Student b, Student c);
	 friend int avgOf4(Student a, Student b, Student c, Student d);
private:
	int studnetID, studentGrade;
	
	
};

