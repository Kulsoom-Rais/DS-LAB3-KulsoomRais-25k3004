#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void shellSort(int arr[], int n)
{
    int totalComparisons = 0;
    int totalShifts = 0;

    // Start with n/2 and keep dividing by 2
    for (int gap = n / 2; gap >= 1; gap /= 2)
    {
        int comparisons = 0;
        int shifts = 0;

        
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
            int j = i;

            while (j >= gap)
            {
                
                comparisons++;

                if (arr[j - gap] > temp)
                {
                    arr[j] = arr[j - gap];
                    j -= gap;
                    shifts++;
                }
                else
                {
                    break;
                }
            }

            arr[j] = temp;
        }

        totalComparisons += comparisons;
        totalShifts += shifts;

        cout << "\nGap = " << gap << endl;

        cout << "Array: ";
        printArray(arr, n);

        cout << "Comparisons for this gap: "
             << comparisons << endl;

        cout << "Shifts for this gap: "
             << shifts << endl;
    }

    cout << "\nTotal Comparisons = "
         << totalComparisons << endl;

    cout << "Total Shifts = "
         << totalShifts << endl;
}

int main()
{
    int arr[] = {90, 20, 80, 30, 70, 40, 60, 50, 10};
    int n = 9;

    cout << "Original Array: ";
    printArray(arr, n);

    shellSort(arr, n);

    cout << "\nFinal Sorted Array: ";
    printArray(arr, n);

    return 0;
}

