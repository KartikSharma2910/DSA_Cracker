#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n <= 25)
    {
        cout << "F Grade" << endl;
    }
    else if (n > 25 && n <= 44)
    {
        cout << "E Grade" << endl;
    }
    else if (n > 44 && n <= 49)
    {
        cout << "D Grade" << endl;
    }
    else if (n > 49 && n <= 59)
    {
        cout << "C Grade" << endl;
    }
    else if (n > 59 && n <= 79)
    {
        cout << "B Grade" << endl;
    }
    else if (n > 79 && n <= 100)
    {
        cout << "A Grade" << endl;
    }
    else
    {
        cout << "Suspended from the school" << endl;
    }
    return 0;
}