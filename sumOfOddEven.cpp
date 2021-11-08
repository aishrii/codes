//To print the sum of odd and even using recursion
#include <bits/stdc++.h>
using namespace std;
int sumofOddEven(int start, int end)
{
    if(start > end)
        return 0;
    else
        return start + sumofOddEven(start + 2, end)
}
