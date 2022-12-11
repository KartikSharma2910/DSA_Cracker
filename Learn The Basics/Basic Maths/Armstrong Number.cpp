#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int orignalNum = n;

    while (n != 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }
    if (sum == orignalNum)
    {
        cout << "It is a armstrong number" << endl;
    }
    else
    {
        cout << "Not a armstrong number" << endl;
    }

    return 0;
}