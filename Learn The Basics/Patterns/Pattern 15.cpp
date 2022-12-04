#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    for (int i = size; i >= 0; i--)
    {
        int character = 65;
        for (int j = 1; j <= i; j++)
        {
            cout << char(character);
            character++;
        }
        cout << endl;
    }

    return 0;
}