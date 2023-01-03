#include <bits/stdc++.h>
using namespace std;

bool CheckPalindrome(string s, int start, int end)
{
    if (start == end)
    {
        return true;
    }

    if (s[start] != s[end])
        return false;

    if (start < end + 1)
        return CheckPalindrome(s, start + 1, end - 1);

    return true;
}

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    cout << CheckPalindrome(s, 0, n - 1);
    return 0;
}