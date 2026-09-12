#include <iostream>
using namespace std;

void insertionSort(int marks[], int n, int &comparisons, int &shifts)
{
    comparisons = 0;
    shifts = 0;

    for (int i = 1; i < n; i++)
    {
        int key = marks[i];
        int j = i - 1;

        while (j >= 0)
        {
            comparisons++;

            
            if (marks[j] < key)
            {
                marks[j + 1] = marks[j];
                shifts++;
                j--;
            }
            else
            {
                break;
            }
        }

        marks[j + 1] = key;
    }
}

int main()
{
    int n;

    
    do
    {
        cout << "Enter number of students (5 to 15): ";
        cin >> n;

        if (n < 5 || n > 15)
        {
            cout << "Invalid input! Number of students must be "
                 << "between 5 and 15." << endl;
        }

    } while (n < 5 || n > 15);

    int marks[15];

    
    for (int i = 0; i < n; i++)
    {
        do
        {
            cout << "Enter marks of student " << i + 1
                 << " (0 to 100): ";
            cin >> marks[i];

            if (marks[i] < 0 || marks[i] > 100)
            {
                cout << "Invalid marks! Marks must be between "
                     << "0 and 100." << endl;
            }

        } while (marks[i] < 0 || marks[i] > 100);
    }

    int comparisons = 0;
    int shifts = 0;

    
    insertionSort(marks, n, comparisons, shifts);

    
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }

    double average = (double)sum / n;

    
    cout << "\n========== Results ==========" << endl;

    cout << "Total Comparisons: " << comparisons << endl;
    cout << "Total Shifts: " << shifts << endl;

    cout << "Highest Marks: " << marks[0] << endl;
    cout << "Lowest Marks: " << marks[n - 1] << endl;
    cout << "Average Marks: " << average << endl;

    cout << "Sorted Marks (Descending): ";

    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }

    cout << endl;

    
    bool highAchiever = false;

    for (int i = 0; i < n; i++)
    {
        if (marks[i] >= 90)
        {
            highAchiever = true;
            break;
        }
    }

    if (highAchiever)
    {
        cout << "High Achiever(s) Present" << endl;
    }
    else
    {
        cout << "No High Achiever" << endl;
    }

    return 0;
}


            
