#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, c = 0;
    cin >> s;
    s = " " + s;
    for(int i = 0; i < s.length() - 1; i++)
    {
        if(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        {
            if(s[i + 1] != ' ')
            c += 1;
        }
    }
    cout << c;
}