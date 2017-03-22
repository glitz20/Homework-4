//////////////////////////////////////////////////
//Submitted by Sabin Sapkota//
//Ex 04_01//
//////////////////////////

#include<iostream>
using namespace std;

int main() {
	int*a = NULL;//declaring a variable for array//
	
	int size;
	cout << "Upto how many numbers do you want to enter?" << endl;
	cin >> size;//total items in the array//

	a = new int[size];//creating array with size as according to user's choice//

	int user = 0;//variable for user input//
	//loops until the array is filled//
	for (int i = 0; i < size; i++) {
		cout << "Input a number." << endl;
		cin >> user;
		a[i] = user;
	}

	double sum = 0;
	//loop to find the sum of all the numbers in the array// 
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}

	double average = sum / size;//finds the average for the array//
	cout << "The average of the given numbers is " << average << endl;
	 
	int abovecount = 0;
	//loops goes through every number in the array//
	for (int i = 0; i < size; i++) {
		if (a[i] > average) {
			abovecount++;//counts the numbers which are above average//
		}
	}
	if (abovecount <= 1)//Outputs the result, if/else statement to differentiate between is and are//
		cout << abovecount << " of the total number is above the average";
	else
		cout<< abovecount << " of the total numbers are above the average";

	delete[] a;//deletes the array//
	return 0;
}
