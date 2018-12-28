#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cctype>
using namespace std;
/*
class Solution {
public:
	double Power(double base, int exponent) {
		if (base == 0) return 0;
		if (exponent == 0) return 1;
		int flag = 0;
		if (exponent < 0)
		{
			flag = 1;
			exponent = -exponent;
		}
		int count = 1;
		double temp = base;
		while (count < exponent)
		{
			if (count * 2 < exponent)
			{
				base *= base;
				count = 2;
			}
			else
			{
				base *= temp;
				count += 1;
			}
		}
		return flag == 1 ? 1 / base : base;
	}
};
*/