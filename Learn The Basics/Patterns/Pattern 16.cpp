#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;

    int character = 65;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << char(character);
        }
        character++;
        cout << endl;
    }

    return 0;
}