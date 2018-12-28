
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
	int numDecodings(string s) {
		int len = s.length();
		if (s == "0") return 0;
		vector<int> dp(len + 1, 0);
		dp[0] = 1;
		if (s[0] != '0')dp[1] = 1;
		for (int i = 2; i <= len; i++)
		{
			int temp = s[i - 1] - '0';
			int temp2 = s[i - 2] - '0';
			if (temp != 0)dp[i] = dp[i - 1];
			temp += (temp2)* 10;
			if (temp <= 26 && temp >= 10)dp[i] += dp[i - 2];
		}
		return dp[len];
	}
};
*/