#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
class Solution {
public:
	vector<vector<int>> subsetsWithDup(vector<int>& nums)
	{
		vector<vector<int>>ans;
		if (nums.empty()) return ans;

		sort(nums.begin(), nums.end());

		for (int i = 0; i < nums.size(); i++)
		{
			vector<int> temp;
			digui(ans, nums, temp, 0, i);
		}
		ans.push_back(nums);
		return ans;
	}
	void digui(vector<vector<int>> &ans, vector<int> &nums, vector<int> &temp, int index, int num)
	{
		if (temp.size() == num)
		{
			ans.push_back(temp);
			return;
		}
		int flag = 0;
		for (int i = index; i < nums.size(); i++)
		{
			if (i - 1 >= 0 && nums[i] == nums[i - 1])
			{
				flag = 1;
				continue;
			}
			else
			{
				vector<int> t(temp);
				t.push_back(nums[i]);
				digui(ans, nums, t, i + 1, num);
			}
		}

		if (!temp.empty() && temp[temp.size() - 1] == nums[index])
		{
			vector<int> t(temp);
			t.push_back(nums[index]);
			digui(ans, nums, t, index + 1, num);
		}
	}
};

int main()
{
	Solution test;
	vector<int> t{1,2,2};
	vector<vector<int>> ans = test.subsetsWithDup(t);
	
	for (int i = 0; i < ans.size(); i++)
	{
		for (int j = 0; j < ans[i].size(); j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	int a;
	while (cin >> a);
	return 0;
}
*/
