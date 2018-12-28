
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
		int p = 0;
		for (int i = 1; i < prices.size(); ++i) {
			int delta = prices[i] - prices[i - 1];
			if (delta > 0) {
				p += delta;
			}
		}
		return p;
	}
	
};

*/