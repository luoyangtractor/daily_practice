#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//vector<vector<int>> twoSum(vector<int>& nums, int start, int end, int need);

/*
class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target)
	{
		sort(nums.begin(), nums.end());
		vector<vector<int>> ans;
		if (nums.size() < 4)
		{
			return ans;
		}
		for (int i = 0; i < nums.size() - 3; i++)
		{
			for (int j = i + 1; j < nums.size() - 2; j++)
			{
				int need = target - nums[i] - nums[j];
				vector<vector<int>> temp = twoSum(nums, j + 1, nums.size() - 1, need);
				for (int k = 0; k < temp.size(); k++)
				{
					temp[k].push_back(nums[i]);
					temp[k].push_back(nums[j]);
					ans.push_back(temp[k]);
				}
			}
		}
		cout << "sadads" << endl;
		for (int i = 0; i < ans.size(); i++)
		{
			sort(ans[i].begin(), ans[i].end());
		}
		int flag = 1;
		cout << "sadads" << endl;

		while (flag == 1&&ans.size()>1)
		{
			cout << "oo";
			flag = 0;
			for (int i = 0; i < ans.size() - 1; i++)
			{
				if (flag == 1)
				{
					break;
				}
				for (int j = i + 1; j < ans.size(); j++)
				{
					cout << i << "   " << j << endl;
					if (i != j&&ans[i] == ans[j])
					{
						flag = 1;
						ans.erase(ans.begin() + j);
						break;
					}
				}
			}
		}
		cout << "sadads" << endl;

		return ans;
	}
};

vector<vector<int>> twoSum(vector<int>& nums, int start, int end, int need)
{
	vector<vector<int>> ans;
	while (start < end)
	{
		if (nums[start] + nums[end]>need)
		{
			end--;
		}
		else if (nums[start] + nums[end] == need)
		{

			ans.push_back({ nums[start], nums[end] });
			start++;
		}
		else
		{
			start++;
		}
	}

	return ans;
}

int main()
{
	vector<int> nums{0,0,0,0};
	Solution test;
	vector<vector<int>> ans = test.fourSum(nums, 1);

	return 0;
}



*/

