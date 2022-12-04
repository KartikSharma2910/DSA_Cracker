#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if (j == 1 || j == size || i == 1 || i == size)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}