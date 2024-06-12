#include <iostream>
#include <ctime>
using namespace std;

int* removeNegatives(int* arr, int size) {
	int newSize = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] >= 0) {
			newSize++;
		}
	}
	int* newArr = new int[newSize];
	int j = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] >= 0) {
			newArr[j] = arr[i];
			j++;
		}
	}
	return newArr;
}

int main() {
	srand(time(0));
	int size = 10;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21 - 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	int* newArr = removeNegatives(arr, size);
	for (int i = 0; i < size; i++) {
		cout << newArr[i] << " ";
	}
	cout << endl;
	delete[] arr;
	delete[] newArr;
	return 0;
}