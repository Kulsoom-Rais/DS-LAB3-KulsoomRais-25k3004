#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int getNextGap(int gap)
{
    gap = (int)(gap / 1.3);

    if (gap < 1)
        gap = 1;

    return gap;
}

void combSort(int arr[], int n)
{
    int gap = n;
    bool swapped = true;

    int iteration = 0;

    while (gap != 1 || swapped)
    {
        gap = getNextGap(gap);

        swapped = false;
        iteration++;

        for (int i = 0; i + gap < n; i++)
        {
            if (arr[i] > arr[i + gap])
            {
                int temp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = temp;

                swapped = true;
            }
        }

        cout << "Iteration " << iteration
             << " - Gap = " << gap << endl;

        cout << "Array: ";
        printArray(arr, n);
        cout << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 5, 50, 60, 70};
    int n = 8;

    cout << "Original Array: ";
    printArray(arr, n);

    cout << "\nComb Sort Process:\n\n";

    combSort(arr, n);

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}

