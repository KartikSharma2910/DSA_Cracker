#include <bits/stdc++.h>
using namespace std;

void PrintDecreasing(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    PrintDecreasing(n - 1);
}

int main()
{
    PrintDecreasing(10);
    return 0;
}