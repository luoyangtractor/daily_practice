#include <iostream>
#include <string>
#include <cctype>

using namespace std;
/*

class Solution {
public:
	int myAtoi(string str) {
		long ans = 0;
		int flag = 0;
		if (str.size() == 1 && isdigit(str[0]))
		{
			return (str[0] - '0');
		}
		auto iter = str.begin();
		while (*iter == ' ')
		{
			iter++;
		}
		if (isdigit(*iter))
		{
			flag = 0;
			ans += (int)*iter - '0';
			ans *= 10;
			iter++;
		}
		else if (*iter == '+')
		{
			flag = 0;
			iter++;
		}
		else if (*iter == '-')
		{
			flag = 1;
			iter++;
		}
		else
		{
			return 0;
		}

		while (iter != str.end())
		{
			if (isdigit(*iter))
			{
				ans += (int)*iter - '0';
				ans *= 10;
				iter++;
				if (flag == 0 && (ans / 10 >= INT_MAX))
				{
					return INT_MAX;
				}
				else if (flag == 1 && (-ans / 10 <= INT_MIN))
				{
					cout << "bingo" << endl;
					return INT_MIN;
				}
			}
			else
			{
				ans /= 10;
				if (flag == 1)
				{
					ans = -ans;
				}
				if (ans > INT_MAX)
				{
					return INT_MAX;
				}
				else if (ans < INT_MIN)
				{
					return INT_MIN;
				}
				return ans;
			}
		}
		ans /= 10;
		if (flag == 1)
		{
			ans = -ans;
		}
		if (ans > INT_MAX)
		{
			return INT_MAX;
		}
		else if (ans < INT_MIN)
		{
			return INT_MIN;
		}
		return ans;

	}
};
*/