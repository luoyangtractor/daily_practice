#include <iostream>

/*
using namespace std;
class Solution {
public:
int lengthOfLongestSubstring(string s)
{
int count = 1;
int old_start = 0;
int ans = 0;
int flag = 0;
if (s.size() == 1 || s.size() == 0)
{
return s.size();
}
for (int i = 1; i < s.size(); i++)
{
flag = 0;
for (int j = i-1; j >= old_start; j--)
{
if (s[j] == s[i])
{
if (count>ans)
{
ans = count;
}
count = i-j;
flag = 1;
old_start = j;
}
}
if (flag == 0)
{
count++;
}
}
if (count>ans)
{
ans = count;
}
return ans;
}
};

int main()
{
Solution test = Solution();
cout<<test.lengthOfLongestSubstring("dvdf")<<endl;
return 0;
}
*/