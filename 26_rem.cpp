#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
        return 0;
    int j = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[j - 1])
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}
int main()
{
    return 0;
}