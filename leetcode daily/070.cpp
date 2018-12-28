#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*
class Solution {
public:
	int climbStairs(int n) {
		if (n == 0)return 1;
		int past = 1, now = 1;
		for (int i = 2; i <= n; i++)
		{
			int temp = now;
			now += past;
			past = temp;
		}
		return now;
	}
};

*/