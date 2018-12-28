
#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

/*
class Solution {
public:
void nextPermutation(vector<int>& nums)
{
if (nums.size()<2)
{
return;
}
auto end = nums.end();
auto begin = nums.begin();
for (auto iter = end - 2; iter >= begin; iter--)
{
for (auto iter2 = end - 1; iter2 > iter; iter2--)
{
if (*iter2 > *iter)
{
int temp = *iter2;
*iter2 = *iter;
*iter = temp;
if (iter + 1<end)
{
sort(iter + 1, end);
}
return;
}
}
}
return sort(nums.begin(), nums.end());
}
};
*/