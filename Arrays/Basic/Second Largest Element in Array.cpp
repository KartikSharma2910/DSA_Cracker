#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int SecondLargest(int arr[], int n)
{
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main()
{
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sL = SecondLargest(arr, n);
    cout << "Second largest is " << sL << endl;
    return 0;
}