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
	 vector<vector<string>> solveNQueens(int n)
	{
		vector<vector<int>> asist;             //0为可走，1为已走，-1为不可走
		for (int i = 0; i < n; i++)
		{
			vector<int> temp(n, 0);
			asist.push_back(temp);
		}
		vector<vector<string>> ans;
		vector<vector<int>> temp;

		queue<vector<vector<int>>> asist_queue;

		asist_queue.push(asist);

		while (!asist_queue.empty())
		{
			temp = asist_queue.front();
            test(temp);
			asist_queue.pop();

			if (success(temp))
			{
				ans.push_back(trans(temp));
			}
			else
			{
				vector<vector<int>> copy;
				while (modifie(temp, copy))
				{
					asist_queue.push(copy);
				}
			}
			temp.clear();
		}
		return ans;
	}

	bool success(vector<vector<int>> temp)
	{
		int count = 0;
		for (auto iter = temp.begin(); iter < temp.end(); iter++)
		{
			for (auto iter1 = (*iter).begin(); iter1 < (*iter).end(); iter1++)
			{
				if (*iter1 == 1)
				{
					count++;
				}
			}
		}
		int size = temp.size();
		return count == size ? true : false;
	}

	vector<string> trans(vector<vector<int>> temp)
	{
		vector<string> ans;
		int size = temp.size();
		for (int i = 0; i < size; i++)
		{
			string s;
			for (int j = 0; j < size; j++)
			{
				if (temp[i][j] == 1)
				{
					s += 'Q';
				}
				else
				{
					s += '.';
				}
			}
			ans.push_back(s);
		}
		return ans;
	}

	bool modifie(vector<vector<int>> &temp, vector<vector<int>> &copy)
	{
		int size = temp.size();
		copy.assign(temp.begin(), temp.end());
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (copy[i][j] == 0)
				{
					copy[i][j] = 1;
					temp[i][j] = -1;
					constrain(copy, i, j);
					return true;
				}
			}
		}
		return false;
	}

	void constrain(vector<vector<int>> &temp, int i, int j)
	{
		int size = temp.size();
		for (int k = 0; k < size; k++)
		{
			if (temp[i][k] == 0)
			{
				temp[i][k] = -1;
			}
			if (temp[k][j] == 0)
			{
				temp[k][j] = -1;
			}
			if (i - k >= 0 && j - k >= 0 && temp[i - k][j - k] == 0)
			{
				temp[i - k][j - k] = -1;
			}
			if (i + k <size && j + k < size && temp[i + k][j + k] == 0)
			{
				temp[i + k][j + k] = -1;
			}
			if (i - k >= 0 && j + k < size && temp[i - k][j + k] == 0)
			{
				temp[i - k][j + k] = -1;
			}
			if (i + k < size && j - k >= 0 && temp[i + k][j - k] == 0)
			{
				temp[i + k][j - k] = -1;
			}
		}
	}

	void test(vector<vector<int>> temp)
	{
		int n = temp.size();
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << temp[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
};

*/
