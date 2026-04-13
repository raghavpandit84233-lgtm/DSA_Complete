#include <iostream>
using namespace std;

// Normal Bubble Sort
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Adaptive Bubble Sort
void AdaptiveBubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) break; // already sorted
    }
}

// Function to print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int op;
    cout << "\nChoose sorting method:\n";
    cout << "1. Normal Bubble Sort\n";
    cout << "2. Adaptive Bubble Sort\n";
    cout << "Enter option: ";
    cin >> op;

    switch (op)
    {
        case 1:
            BubbleSort(arr, n);
            break;

        case 2:
            AdaptiveBubbleSort(arr, n);
            break;

        default:
            cout << "Invalid option!\n";
            delete[] arr;
            return 0;
    }

    cout << "\nSorted Array: ";
    printArray(arr, n);

    delete[] arr; // free memory

    return 0;
}
