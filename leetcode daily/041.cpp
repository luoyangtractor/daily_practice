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
	void exchange(int& a, int& b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	int firstMissingPositive(vector<int>& nums) {
		int i = 0;
		int n = nums.size();
		while (i < n) {
			if (nums[i] != i + 1 && nums[i] >= 1 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) //最后这个条件防止死循环  
			{
				exchange(nums[i], nums[nums[i] - 1]);
			}
			else {
				++i;
			}
		}
		for (int i = 0; i < n; ++i) {
			if (nums[i] != (i + 1))
				return i + 1;
		}
		return n + 1;
	}
};
*/