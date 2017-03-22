//Submitted by Sabin Sapkota//
//Ex 4.5//


#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

int main()
{
	int ClassSIZE = 2; // Establishes class size
	Course course1("CS 172", ClassSIZE); // course name with size

	course1.addStudent("Utsal Shrestha"); // Adds a student
	course1.addStudent("Roland Bagpiper"); // Adds a student

    //number of currently enrolled//
	cout << "Students currently enrolled in " << course1.getCourseName() << " is " << course1.getNumberOfStudents() << endl;
	cout << "You decide to add more students." << endl;

	
	course1.addStudent("Johny Deep"); // Adds a student
	course1.addStudent("Harke Bahadur"); // Adds a student

		//shows new number of enrolled students
	cout << "The new number of students currently enrolled in the course is " << course1.getNumberOfStudents() << endl;
	cout << "\nThe students who are enrolled are: " << endl;

	const string* ClassStudents{ course1.getStudent() }; // Creates a new array that has the values that are in the class behaviors

// This loop will ouput the names of the students that are stored in the array
	for (int i = 0; i < course1.getNumberOfStudents(); i++)
	{
		if (i == course1.getNumberOfStudents() - 1) // This executes if this is the last time the loop will run before it ends
		{
			cout << "and " << ClassStudents[i]<<".";
			break;//for loop ends here after the last students name//
		}
		cout << ClassStudents[i] << ", "; // Outputs the values in the array
	}

	cout << endl;

	cout << "You decide that you are going to drop one student. " << endl;
	course1.dropStudent("Roland Bagpiper"); // executes the function where one student in the array will be removed from the array entirely

	cout << "The students who are still enrolled: ";

	// This loop ouputs the names of the students that are stored in the array
	for (int i = 0; i < course1.getNumberOfStudents(); i++)
	{
		cout << ClassStudents[i] << ", "; // Outputs the name of student in the new array//	
	}

	cout << endl;

	return 0;
} 