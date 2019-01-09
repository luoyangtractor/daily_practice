#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution{
public:
	bool containsNearbyAlmostDuplicate(vector<int>& nums, int kk, int t)
	{
		unordered_map<int, vector<int>> map;
		long long high = INT_MIN;
		long long low = INT_MAX;
		for (int i = 0; i < nums.size(); i++)
		{
			if (!map.empty())
			{
				for (auto iter = map.begin(); iter != map.end(); iter++)
				{
					if (abs(iter->first - nums[i]) <= t)
					{
						//cout << j << "     " << nums[i] << "    " << map[j].size() << endl;
						for (int k = 0; k < iter->second.size(); k++)
						{
							//cout << map[j][k] << "  " << i << endl;
							if (abs(iter->second.at(k) - i) <= kk)return true;
						}
					}
				}
			}

			if (map.find(nums[i]) != map.end())
			{
				map[nums[i]].push_back(i);
			}
			else map.insert(make_pair(nums[i], vector<int>{i}));

		}
		return false;
	}
};
