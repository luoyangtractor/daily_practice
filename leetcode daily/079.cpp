#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
/*
class Solution {
public:
	bool exist(vector<vector<char>>& board, string word)
	{
		if (board.empty())
			return word.empty() ? true : false;
		if (word.empty())
			return true;
		for (int i = 0; i < board.size(); i++)
		{
			for (int j = 0; j < board[0].size(); j++)
			{
				if (board[i][j] == word[0])
					if (dfs(board, word, 0, i, j))return true;
			}
		}
		return false;
	}
	bool dfs(vector<vector<char>> board, string word, int index, int i, int j)
	{
		if (i<0 || i>=board.size() || j<0 || j>=board[0].size())return false;
		if (index == word.size() - 1)
			return board[i][j] == word[index] ? true : false;
	
		if (board[i][j] == 0)return false;
		if (board[i][j] == word[index])
		{
			board[i][j] = 0;
			if (dfs(board, word, index + 1, i - 1, j))return true;
			if (dfs(board, word, index + 1, i + 1, j))return true;
			if (dfs(board, word, index + 1, i, j - 1))return true;
			if (dfs(board, word, index + 1, i, j + 1))return true;
		}
		return false;
	}
};


int main()
{
	vector<vector<char>> board;
	vector<char> temp = { 'A', 'B', 'C', 'E' };
	board.push_back(temp);
	temp = { 'S', 'F', 'C', 'S' };
	board.push_back(temp);
	 temp = { 'A', 'D', 'E', 'E' };
	board.push_back(temp);
	string s = "ABCCED";
	Solution test;
	test.exist(board, s);

	int a;
	while (cin >> a);
	return 0;
}
*/



