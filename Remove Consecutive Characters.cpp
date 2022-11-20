#include <iostream>
using namespace std;

string removeConsecutiveCharacter(string S)
{
    string temp = "";
    if (S.length() == 0)
    {
        return S;
    }

    for (int i = 0; i < S.length() - 1; i++)
    {
        if (S[i] != S[i + 1])
        {
            temp.push_back(S[i]);
        }
    }
    temp.push_back(S[S.length() - 1]);
    return temp;
}