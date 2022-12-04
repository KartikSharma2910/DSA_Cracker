#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;

    for (int i = size; i >= 0; i--)
    {
        for (int space = 1; space <= size - i; space++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}