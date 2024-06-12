#include <iostream>
#include <ctime>
using namespace std;

template<typename T>
void func(T* arr, int size, T*& sum, T*& mul)
{
    if (sum == nullptr)
    {
        sum = new T(0);
    }
    if (mul == nullptr)
    {
        mul = new T(1);
    }
    for (int i = 0; i < size; i++)
    {
        *sum += arr[i];
        *mul *= arr[i];
    }
}

int main()
{
    srand(time(0));
    int size = 10;
    long long* arr = new long long[size];
    long long* sum = nullptr;
    long long* mul = nullptr;
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 10 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;

    func<long long>(arr, size, sum, mul);
    cout << "Sum: " << *sum << endl;
    cout << "Mul: " << *mul << endl;
    return 0;
}