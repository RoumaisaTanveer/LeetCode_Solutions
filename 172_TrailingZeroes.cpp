#include <bits/stdc++.h>
using namespace std;

int trailingZeroes(int n)
{
    int count = 0;
    while (n >= 5)
    {
        n /= 5;
        count += n;
    }
    return count;
}
int main()
{
    return 0;
}