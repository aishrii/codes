#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p = "";
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        p = s[i] + p;
    }
    if(p == s)
        cout << "Palindrome";
    else
        cout << "Not palindrome";
}