#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin >> age;

    if (age < 18)
    {
        cout << "Not eligible for job" << endl;
    }
    else if (age >= 18 && age <= 54)
    {
        cout << "Eligible for Job" << endl;
    }
    else if (age >= 55 && age <= 57)
    {
        cout << "Eligible for job but retirment soon" << endl;
    }
    else if (age > 57)
    {
        cout << "Retirement Time" << endl;
    }
    return 0;
}