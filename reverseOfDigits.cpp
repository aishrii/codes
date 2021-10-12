//Reverse of digits using recursion
#include <bits/stdc++.h>
using namespace std;
//no.of digits using log
int reverse(int rev, int n)
{
    if(n <= 9)
        return rev * 10 + n;
    else
    return reverse(rev * 10 + n % 10, n / 10)
}

int reverse(int n)
{
    int digit = log10(n);
    if(n == 0)
        return 0;
    else
        return(n % 10 * pow(10,digit)) + reverse(n / 10);
}
int main()
{
    cout << reverse(0, 1348);
}