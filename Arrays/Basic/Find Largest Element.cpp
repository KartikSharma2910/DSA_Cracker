#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int FindLargest(int arr[], int n)
{
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }
    return largest;
}

int main()
{
    int arr1[5] = {2, 5, 1, 3, 0};
    int arr2[5] = {8, 10, 5, 7, 9};

    cout << "The Largest element in the array is: " << FindLargest(arr1, 5) << endl;
    cout << "The Largest element in the array is: " << FindLargest(arr2, 5);

    return 0;
}