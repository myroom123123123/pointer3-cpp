#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
void count(int* arr, int size, int& neg, int& pos, int& zero) {
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			neg++;
		}
		else if (arr[i] > 0) {
			pos++;
		}
		else {
			zero++;
		}
	}
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
	int neg = 0, pos = 0, zero = 0;
	count<int>(arr, size, neg, pos, zero);
	cout << "Negative: " << neg << endl;
	cout << "Positive: " << pos << endl;
	cout << "Zero: " << zero << endl;
	delete[] arr;
	return 0;
}