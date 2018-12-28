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
	bool isValidSudoku(vector<vector<char>>& board)
	{
		int size = board.size();
		for (int i = 0; i < size; i++)
		{
			if (!row_check(board[i]))
			{
				return false;
			}
			if (!col_check(board, i))
			{
				return false;
			}
		}
		for (int i = 0; i < size; i += 3)
		{
			for (int j = 0; j < size; j += 3)
			{
				if (!sub_check(board, i, j))
				{
					return false;
				}
			}
		}
		return true;
	}
	bool row_check(vector<char> row)
	{
		vector<int> temp(10, 0);
		int size = row.size();
		for (int i = 0; i < size; i++)
		{
			if (row[i] != '.')
			{
				if (temp[row[i] - '0']>0)
				{
					return false;
				}
				temp[row[i] - '0']++;
			}
		}
		temp.clear();
		return true;
	}
	bool col_check(vector<vector<char>> board, int index)
	{
		vector<int> temp(10, 0);
		int size = board.size();
		for (int i = 0; i < size; i++)
		{
			if (board[i][index] != '.')
			{
				if (temp[board[i][index] - '0']>0)
				{
					return false;
				}
				temp[board[i][index] - '0']++;
			}
		}
		temp.clear();
		return true;
	}
	bool sub_check(vector<vector<char>> board, int row, int col)
	{
		vector<int> temp(10, 0);
		int size = board.size();
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (board[row + i][col + j] != '.')
				{
					if (temp[board[row + i][col + j] - '0']>0)
					{
						return false;
					}
					temp[board[row + i][col + j] - '0']++;
				}
			}
		}
		temp.clear();
		return true;
	}
};
*/