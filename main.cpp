#include <iostream>
#include <ctime>
using namespace std;

int* find(int* A, int* B, int sizeA, int sizeB) {
	for (int i = 0; i < sizeA; i++) {
		if (A[i] == B[0]) {
			int j = 1;
			while (j < sizeB && A[i + j] == B[j]) {
				j++;
			}
			if (j == sizeB) {
				return &A[i];
			}
		}
	}
	return 0;
}

int main() {
	srand(time(0));
	int sizeA = 10;
	int sizeB = 3;
	int A[10];
	int B[3];
	for (int i = 0; i < sizeA; i++) {
		A[i] = rand() % 10;
		cout << A[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < sizeB; i++) {
		B[i] = rand() % 10;
		cout << B[i] << " ";
	}
	cout << endl;
	int* result = find(A, B, sizeA, sizeB);
	if (result) {
		cout << "Found at index " << result - A << endl;
	}
	else {
		cout << "Not found" << endl;
	}
	return 0;
}