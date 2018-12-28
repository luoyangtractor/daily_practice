#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits.h>

using namespace std;
/*
struct point
{
	int row;
	int col;
	point(int r = 0, int c = 0) :row(r), col(c){};
};

class Solution {
public:
	void solve(vector<vector<char>>& board) 
	{
		if (board.empty())return;
		queue<point> tmp;
		vector<point> region;
		for (int i = 0; i < board.size(); i++)
		{
			for (int j =0 ; j<board[0].size() ; j++)
			{
				show(board);
				if (board[i][j] == 'O')
				{
					vector<vector<int>> mask(board.size(), vector<int>(board[0].size(), 0));
					region.clear();
					tmp.push(point(i,j));
					int flag = 0;
					if (i == 0 || i == board.size() - 1 || j == 0 || j == board[0].size() - 1)flag = 1;
					while (!tmp.empty())
					{
						point t = tmp.front();
						region.push_back(t);
						tmp.pop();
						mask[t.row][t.col] = 1;
						if (t.row - 1 >= 0 && mask[t.row - 1][t.col] == 0&& board[t.row - 1][t.col] == 'O')
						{
							tmp.push(point(t.row - 1, t.col));
							if (t.row - 1 == 0)flag = 1;
						}
						if ( t.row + 1 < board.size() && mask[t.row + 1][t.col] == 0 && board[t.row + 1][t.col] == 'O')
						{
							tmp.push(point(t.row + 1, t.col));
							if ( t.row + 1 == board.size()-1)flag = 1;
						}
						if (t.col-1 >= 0 && mask[t.row][t.col - 1] == 0 && board[t.row ][t.col-1] == 'O')
						{
							tmp.push(point(t.row , t.col-1));
							if ( t.col-1 == 0 )flag = 1;
						}
						if ( t.col+1 < board[0].size() && mask[t.row][t.col + 1] == 0 && board[t.row][t.col+1] == 'O')
						{
							tmp.push(point(t.row, t.col+1));
							if (t.col+1 == board[0].size()-1)flag = 1;
						}
					}
					char fill = 'X';
					if (flag == 1)fill = 'L';
					for (auto iter = region.begin(); iter < region.end(); iter++)
					{
						board[iter->row][iter->col] = fill;
					}
				}
			}
		}
		for (int i = 0; i < board.size(); i++)
		{
			for (int j = 0; j < board[0].size(); j++)
			{
				if (board[i][j] == 'L')board[i][j] = 'O';
			}
		}
	}
	void show(vector<vector<char>>& board)
	{
		for (int i = 0; i < board.size(); i++)
		{
			for (int j = 0; j<board[0].size(); j++)
			{
				cout << board[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

};

int main()
{
	Solution test;
	vector<vector<char>> board = { {'X','O','X', 'O','X','O'},{ 'O','X','O', 'X','O','X' },{ 'X','O','X', 'O','X','O' },{ 'O','X','O', 'X','O','X' }};
	test.solve(board);
	return 0;
}
*/