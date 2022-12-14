#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    if (a == b)
    {
        return a;
    }
    if (a > b)
    {
        return GCD(a - b, a);
    }
    return GCD(a, b - a);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b);
    return 0;
}