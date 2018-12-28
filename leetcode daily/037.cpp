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
	void solveSudoku(vector<vector<char>>& board)
	{
		digui(board, 0, -1);
		return;
	}
	bool digui(vector<vector<char>>& board, int row, int col)
	{

		if (row == 8 && col == 8)
		{
			return true;
		}
		if (col == 8)
		{
			row += 1;
			col = 0;
		}
		else
		{
			col += 1;
		}

		if (board[row][col] == '.')
		{
			for (int k = 1; k < 10; k++)
			{
				board[row][col] = k + '0';
				//cout<<row<<" "<<col<<" "<<board[row][col]<<endl;
				if (!row_check(board[row], col) || !col_check(board, row, col) || !sub_check(board, row, col))
				{
				}
				else
				{
					if (digui(board, row, col))
					{
						return true;
					}
				}
			}
			board[row][col] = '.';
			return false;
		}
		else
		{
			if (row == 8 && col == 8)
			{
				return true;
			}
			return digui(board, row, col);
		}
	}
	bool row_check(vector<char> row, int col)
	{

		for (int i = 0; i < 9; i++)
		{
			if (i != col)
			{
				if (row[i] == row[col])
				{
					return false;
				}
			}
		}
		return true;
	}
	bool col_check(vector<vector<char>> board, int row, int col)
	{
		for (int i = 0; i < 9; i++)
		{
			if (i != row)
			{
				if (board[i][col] == board[row][col])
				{
					return false;
				}
			}
		}
		return true;
	}
	bool sub_check(vector<vector<char>> board, int row, int col)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (row - row % 3 + i != row || col - col % 3 + j != col)
				{
					if (board[row - row % 3 + i][col - col % 3 + j] == board[row][col])
					{
						return false;
					}
				}
			}
		}
		return true;
	}
};
*/