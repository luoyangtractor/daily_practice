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
	void rotate(vector<vector<int>>& matrix)
	{
		duiijiaoxian(matrix);
		duichenglie(matrix);
	}
	void duiijiaoxian(vector<vector<int>>& matrix)
	{
		int size = matrix.size();
		int dcz = size / 2;
		for (int i = 0; i < dcz; i++)
		{
			for (int j = 0; j < size; j++)
			{
				swap(matrix[i][j], matrix[size - 1 - i][j]);
			}
		}
	}
	void duichenglie(vector<vector<int>>& matrix)
	{
		int size = matrix.size();
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < i; j++)
			{
				swap(matrix[i][j], matrix[j][i]);
			}
		}
	}
};

*/