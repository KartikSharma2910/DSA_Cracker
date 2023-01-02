#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Approch 1
    // if (n >= 18)
    // {
    //     cout << "You are a adult";
    // }
    // else
    // {
    //     cout << "You are still a kid";
    // }

    // Approch 2
    n >= 18 ? cout << "You are a adult" : cout << "You are still a kid";
    return 0;
}