#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

/*
class Solution {
public:
	bool isPalindrome(int x)
	{
		if (x < 0)
		{
			return false;
		}
		bool ans = true;
		vector<int> temp;
		while (x != 0)
		{
			temp.push_back(x % 10);
			x /= 10;
		}
		int len = temp.size();
		for (int i = 0; i < len - i - 1; i++)
		{
			cout << temp[i] << "  " << temp[len - i - 1] << endl;
			if (temp[i] != temp[len - i - 1])
			{
				cout << temp[i] << "  " << temp[len - i - 1] << endl;
				return false;
			}
		}
		return ans;
	}
};
*/