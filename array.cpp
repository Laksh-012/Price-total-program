#include <iostream>
using namespace std;

int total(int array[], int size);

int main()
{
    int size;

    int *array = new int[size];

    cout << "Enter size of array : ";
    cin >> size;

    cout << "Enter elements in array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Sum of elements in array is: " << total(array, size) << endl;
}

int total(int array[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    else
    {
        return array[0] + total(array + 1, size - 1);
    }
}