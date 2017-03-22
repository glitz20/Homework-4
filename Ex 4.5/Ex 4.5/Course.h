#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
	string courseName; // name of the course
	string* students; // name of the students
	int numberOfStudents; // number of students enrolled in the course
	int capacity; // capacity of the array for students

public:
	Course(const string& courseName, int capacity); // Gets the name of the course and the array size from main
	~Course(); // A deconstructor that will delete the student array
	const string getCourseName(); // Returns the name of the course
	void increaseClassSize(); // Increases the size of the array to add more students
	void addStudent(const string& name); // Adds a student to the array
	void dropStudent(const string& name); // Removes a student from the array
	const string* getStudent(); // Returns the student array
	const int getNumberOfStudents(); // Returns the number of students enrolled in the course
	void clear(); // Deletes the student array
}; 
#endif
