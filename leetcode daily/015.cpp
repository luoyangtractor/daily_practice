#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/*
int halfsearch(vector<int> nums, int need, int begin, int end);

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums)
	{

		vector<vector<int>> ans;
		if (nums.size()<3)
		{
			return ans;
		}
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (i>0 && nums[i] == nums[i - 1])
			{
				continue;
			}
			int need = 0 - nums[i], b = i + 1, e = nums.size() - 1;
			vector<int> ret = modefiedsearch(nums, need, i, b, e);
			for (int j = 0; j<ret.size(); j += 3)
			{
				//      cout<<nums[i]<<" "<<nums[ret[j]]<<" "<<nums[ret[j+1]]<<endl;
				vector<int>temp{ ret[j], ret[j + 1], ret[j + 2] };
				sort(temp.begin(), temp.end());
				ans.push_back(temp);
			}
		}

		return ans;
	}
};

vector<int> modefiedsearch(vector<int> nums, int need, int jump, int begin, int end)
{
	vector<int> ret{};
	int flag = 0;
	while (begin != end)
	{
		if (begin == jump || (begin>0 && nums[begin] == nums[begin - 1] && flag == 1))
		{

			(begin)++;
			continue;
		}
		if (end == jump || (end<nums.size() && nums[end] == nums[end + 1] && flag == 1))
		{
			(end)--;
			continue;
		}
		flag = 0;
		if (nums[begin] + nums[end] == need)
		{
			cout << "wocao " << nums[jump] << "   " << nums[begin] << " " << nums[end] << " " << need << endl;

			ret.push_back(nums[jump]);
			ret.push_back(nums[begin]);
			ret.push_back(nums[end]);
			flag = 1;
			begin++;
		}
		else if (nums[begin] + nums[end] < need)
		{
			(begin)++;
		}
		else
		{
			(end)--;
		}
	}
	return ret;
}

int halfsearch(vector<int> nums, int need, int begin, int end)
{
	if (begin == end)
	{
		return	nums[begin] == need ? begin : -1;
	}
	int mid = (begin + end) / 2;
	if (nums[mid] == need)
	{
		return mid;
	}
	else
	{
		return nums[mid]<need ? halfsearch(nums, need, mid + 1, end) : halfsearch(nums, need, begin, mid);
	}
}
*/
