#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;
/*
class Solution {
public:
	int singleNumber(vector<int>& nums)
	{
		vector<int> tmp(32, 0);
		for (int i = 0; i < nums.size(); i++)
		{
			int ii = 1;
			for (int j = 0; j <32; j++)
			{
				if ((nums[i] & ii) != 0) tmp[j] += 1;
				ii = ii << 1;
			}
		}
		int ans = 0;
		for (int i = 0; i < tmp.size(); i++)
		{
			cout << tmp[i] << " " << ans << endl;
			if (tmp[i] % 3 == 1)
			{
				int t = 1;
				for (int ii = 0; ii < i; ii++)
				{
					t *= 2;
				}
				ans += t;
			}

		}
		return ans;
	}
};

*/