//Submitted by Sabin Sapkota//
//Ex 4.3//

#include<iostream>
using namespace std;

int smallestelement(const int *element, int size);//function prototype//

int main() {
	const int size = 8;
	int element[size] = { 1,2,4,5,10,100,2,-22 };
	//call for the function//
	int smallest = smallestelement(element, size);

	cout << "The smallest element in the array is " << smallest << endl;
	return 0;
}

int smallestelement(const int *elements, int size)
{
	int newsize = size;
	int* array = new int[newsize];
	//takes the value in original array and save them to new array//
	for (int i = 0; i < newsize; i++) {
		array[i] = elements[i];
	}

	int smallest = array[1];//default smallest value in the first position in the array//
	//loops to find the smallest element
	for (int i = 0; i < newsize; i++) {
		{
			if (array[i] < smallest) {
				smallest = array[i];//stores the smallest value in the array//
			}
		}
	}
	delete[]array;//deletes the array to prevent memory leak//
	return smallest;//return the smallest value//
}