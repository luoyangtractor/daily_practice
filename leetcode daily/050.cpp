#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>

using namespace std;
/*
class Solution {
public:
	double myPow(double x, int n)
	{
		double ans = 1;
		if (n == 1)
		{
			return x;
		}
		else if (n == -1)
		{
			return 1 / x;
		}

		if (n > 1)
		{
			ans = p(x, n, 1, x);
		}
		else if (n < -1)
		{
			ans = 1 / p(x, -n, 1, x);
		}
		return ans;
	}
	double p(double x, int n, int count, double temp)
	{
		if (count == n - 1)
		{
			return temp * x;
		}

		if (2 * count < n && count <= INT_MAX / 2)
		{
			temp *= temp;
			count += count;
			return p(x, n, count, temp);
		}
		else if (2 * count == n)
		{
			temp *= temp;
			return temp;
		}
		else
		{
			return temp * p(x, n - count, 1, x);
		}
	}
	}
};

*/