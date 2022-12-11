#include <iostream>
using namespace std;

bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start <= end)
    {
        if (s[start] != s[end])
        {

            return false;
        }
        else
        {

            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (checkPalindrome(s))
    {
        cout << "String is Palindrome" << endl;
    }
    else
    {
        cout << "String is not Palindrome" << endl;
    }
    return 0;
}