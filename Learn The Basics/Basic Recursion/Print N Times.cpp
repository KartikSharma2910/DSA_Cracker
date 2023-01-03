#include <bits/stdc++.h>
using namespace std;

void PrintN(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "Hello World" << endl;
    PrintN(n - 1);
}

int main()
{
    PrintN(20);
    return 0;
}