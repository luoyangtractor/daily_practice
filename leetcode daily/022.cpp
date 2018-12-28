#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

/*
class Solution {
public:
	vector<string> generateParenthesis(int n)
	{
		char* index = new char[2 * n];
		for (int i = 0; i < n; i++)
		{
			index[i] = '(';
			index[i + n] = '(';
		}
		vector<string> ans;
		string temp;
		iter(0, 0, n, temp, ans);
		return ans;
	}

	void iter(int left, int  right, int n, string temp, vector<string> &ans)
	{
		if (left >= n && right >= n)
		{
			return;
		}
		else if (left >= n)
		{
			for (int i = right; i < n; i++)
			{
				temp.push_back(')');
			}
			cout << " 2 2 " << right << "       " << temp << endl;
			ans.push_back(temp);
			return;
		}
		else
		{
			string temp1(temp);
			if (right < left)
			{
				temp1.push_back(')');
				iter(left, right + 1, n, temp1, ans);
			}
			temp.push_back('(');
			iter(left + 1, right, n, temp, ans);
		}
	}
};
*/
