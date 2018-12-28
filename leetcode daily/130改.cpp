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
	point(int r = 0, int c = 0) :row(r), col(c) {};
};

class Solution {
public:
	void solve(vector<vector<char>>& board)
	{
		if (board.empty())return;
		
		int width = board[0].size();
		int height = board.size();
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (board[i][j] == 'O')
				{
					if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
					{
						
						bfs(board,i,j, width, height);
					}
				}
			}
		}
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (board[i][j] == 'L')board[i][j] = 'O';
				else if (board[i][j] == 'O')board[i][j] = 'X';
			}
		}
	}
	void bfs(vector<vector<char>>& board,int i, int j, int width, int height)
	{
		queue<point*> tmp;
		tmp.push(new point(i, j));
		while (!tmp.empty())
		{
			point* t = tmp.front();
			tmp.pop();
			if (t->row - 1 >= 0 && board[t->row - 1][t->col] == 'O')
			{
				tmp.push(new point(t->row - 1, t->col));
				board[t->row-1][t->col] = 'L';
			}
			if (t->row + 1 < height && board[t->row + 1][t->col] == 'O')
			{
				tmp.push(new point(t->row + 1, t->col));
				board[t->row+1][t->col] = 'L';
			}
			if (t->col - 1 >= 0 && board[t->row][t->col - 1] == 'O')
			{
				board[t->row][t->col-1] = 'L';
				tmp.push(new point(t->row, t->col - 1));
			}
			if (t->col + 1 < width && board[t->row][t->col + 1] == 'O')
			{
				board[t->row][t->col+1] = 'L';
				tmp.push(new point(t->row, t->col + 1));
			}
			delete t;
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
	vector<vector<char>> board = { { 'X','O','X', 'O','X','O' },{ 'O','X','O', 'X','O','X' },{ 'X','O','X', 'O','X','O' },{ 'O','X','O', 'X','O','X' } };
	test.solve(board);
	test.show(board);
	return 0;
}

*/