//* Bubble Sort Algorithm
#include <iostream>

using namespace std;

void Bubblesort(int arr[], int n)
{
    for (int times = 1; times <= n - 1; times++)
    {
        for (int i = 0; i <= n - 1 - times; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}
void printArray(int arr[], int n)
{
    cout << "Array Content" << endl
         << "+-----------+" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            cout << arr[i] << endl
                 << endl;
        else
            cout << arr[i] << ", ";
    }
}
//! Driver Code
int main()
{
    system("clear");
    int arr[] = {10, 12, 5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    Bubblesort(arr, n);
    printArray(arr, n);
    return 0;
}