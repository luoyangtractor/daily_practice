#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/*
class Solution {
public:
	string addBinary(string a, string b) 
	{
		int size_a = a.size();
		int size_b = b.size();

		int temp = 0;
		int jinwei = 0;

		int max_len = max(size_a, size_b);
		string ans;

		for (int i = 0; i < max_len; i++)
		{
			if (size_a - i- 1< 0)
			{
				temp = b[size_b - i - 1] - '0' + jinwei;
				jinwei = temp / 2;

				ans += temp % 2 + '0';
			}
			else if (size_b - i - 1 < 0)
			{
				temp = a[size_a - i - 1] - '0' + jinwei;
				jinwei = temp / 2;

				ans += temp % 2 + '0';
			}
			else
			{
				temp = a[size_a - i - 1] - '0' + b[size_b - i - 1] - '0' + jinwei;
				jinwei = temp / 2;
				ans += temp % 2 + '0';

			}
		}

		if (jinwei > 0) ans += '1';
		reverse(ans.begin(), ans.end());
		return ans;
	}
};
*/

