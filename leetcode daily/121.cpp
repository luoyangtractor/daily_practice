
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
class Solution {
public:
	int maxProfit(vector<int> &prices) {
		int m = prices.size();
		if (m == 0)
			return 0;

		int curMin = prices[0];
		int ret = 0;
		for (int i = 1; i < m; i++)
		{
			curMin = min(curMin, prices[i]);
			ret = max(ret, prices[i] - curMin);
		}
		return ret;
	}

};

*/