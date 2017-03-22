//Submitted by Sabin Sapkota//
//Ex 4.2//

#include<iostream>
using namespace std;
 
int* doubleCapacity(const int*list, int size);//function prototype//

int main() {
	const int size = 5;//setting size for array//
	int list[size];

	int user = 0;
	for (int i = 0; i < size; i++) {
		cout << "Enter a number: ";
		cin >> user;

		list[i] = user;//stores user input into the array//
	}
	cout << "As array is full, no longer input can be added. "
		<< "So array size " << size << " is now doubled";
	cout << "\n" << endl;

	int*array = doubleCapacity(list, (size));//calling for function to create array with double size//
	//outputs all the value in the array//
	cout << "The numbers that are in the array are: ";
	for (int i = 0; i < (size * 2); i++) {
		cout << array[i] << " ";
	}
	cout << "\n" << endl;
	//outputs the new size of the array//
	cout << "The size of the array now is " << (size * 2)<<endl;
	return 0;
}

int *doubleCapacity(const int* list, int size) {
	//double the previous array size//
	int NewSize = size * 2;
	int *iArray = new int[NewSize];

	int input = 0;
	for (int i = 0; i < size; i++) {
		iArray[i] = list[i];//transfers the value in the first array to the newly formed array//
	}

	int user = 0;
	//fills the second half of the array//
	for (int i= (NewSize / 2); i < NewSize; i++) {
		cout << "Enter a number:";
		cin >> user;
		iArray[i] = user;
	}
	return iArray;
	delete[] iArray;//deletes the new array//
}