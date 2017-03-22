#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

// This function takes the name of the course and size from the user and implement them to "courseName" and "capacity"
// This function will make an array for students according to size determined by the user 
Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0; // Defaults number 0
	this->courseName = courseName; // takes user input to establish the value of courseName
	this->capacity = capacity; // Takes user input to establish the value of capacity
	students = new string[capacity]; // creates an array for students with its size equal to "capacity"
}

// This deconstuctor deletes the student array
Course::~Course()
{
	delete[] students; // Deletes the array
}

// This function will return the name of the course
const string Course::getCourseName()
{
	return courseName; // Returns the "courseName" variable
}

// This function doubles size of the array if the user tries to exceed it
void Course::increaseClassSize()
{
	int NewSize = capacity * 2; // This doubles the size of the array
	string * pArray = new string[NewSize]; // Creates a new array with double the size of the original

// transfer value stored in the original array to the new array
	for (int i = 0; i < capacity; i++)
	{
		pArray[i] = students[i]; 
	}

	capacity = NewSize; 
	delete[]students; //deletes the student array
	students = pArray; // Restores the student array with doubled the size
}

// This function will add a student's name to the "student" array 
void Course::addStudent(const string& name)
{
	if (numberOfStudents >= capacity) // This executes if the the user tries to add another student when the array is full
	{
		increaseClassSize(); // Calls the the function that will increase the size of the array
	}
	students[numberOfStudents] = name; // Saves the name that the user inputs to the "student" array 
	numberOfStudents++; // Increases the number of students that are enrolled in the course
}

// This function will remove a student, of the user's choice, from the array
void Course::dropStudent(const string& name)
{
	int index= 0; // keep track of index of name entered
for (int i = 0; i < numberOfStudents; i++)
	{
		if (students[i] == name) // Executes if the name that the user is equal to a value that is stored in the array
		{
		index= i; // Makes the variable "index" equal to "i"
		break; // Breaks the loop
		}
	}


	// makes the value in the array that is at "index" to be covered up by the next array value
	for (int i = index; i < numberOfStudents - 1; i++)
	{
		students[i] = students[i + 1]; // Makes the current spot in the array equal to the value that is stored in the spot after it
	}
	numberOfStudents--; // decreases the number of students enrolled in the class
}

// returns the array that contains the names of the students
const string* Course::getStudent()
{
	return students; 
} 

// returns the number of students that are enrolled in the course
const int Course::getNumberOfStudents()
{
	return numberOfStudents;
}
// This function deletes the array
void Course::clear()
{
	delete[] students; // Deletes the student array
}