#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/*

int search(vector<int>& nums, int target, int start, int end);

class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) 
	{
		int ans = INT_MAX;
		sort(nums.begin(),nums.end());
		for (int i = 0; i < nums.size()-2; i++)
		{
			int ret = search(nums, target, i + 1, nums.size()-1);
			if ( ret == 0)
			{
				return target;
			}
			else
			{
				if (abs(ret) < abs(ans))
				{
					ans = ret;
				}
			}
		}
		return ans + target;
	}
};

int search(vector<int>& nums, int target, int start, int end)
{
	int st = start, ed = end;
	int dis = INT_MAX;
	while (st != ed)
	{
		int tempdis = nums[start - 1] + nums[st] + nums[ed];

		if (tempdis < target)
		{
			if (abs(tempdis - target) < abs(dis))
			{
				dis = tempdis - target;
			}
			st++;
		}
		else if (tempdis > target)
		{
			if (abs(tempdis - target) < abs(dis))
			{
				dis = tempdis - target;
			}
			ed--;
		}
		else
		{
			return 0;
		}
	}
	return dis;
}

int main()
{
	Solution test = Solution();
	vector<int> nums{0,1,2};
	cout << test.threeSumClosest(nums, 0) << endl;
	return 0;
}
*/