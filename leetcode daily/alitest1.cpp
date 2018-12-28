#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits.h>
using namespace std;

/*
void bazhen(int m, int n, vector<vector<int>>& bing)
{
	vector<vector<int>> temp(m, vector<int>(n,0));
	int max_val = INT_MIN;
	int min_val = INT_MAX;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int value = 0;
			bfs(bing, temp, i, j, value);
			if (value > max_val) max_val = value;
			if (value < min_val&&value > 0) min_val = value;
		}
	}
	cout << max_val << endl << min_val << endl;
}
void bfs(vector<vector<int>>& temp, vector<vector<int>>& bing, int i, int j, int& value)
{
	if (temp[i][j] == 1) return;
	queue<int> q;
	q.push(i);
	q.push(j);
	while (!q.empty())
	{
		int ti = q.front();
		q.pop();
		int tj = q.front();
		q.pop();
		value += bing[ti][tj];
		temp[ti][tj] = 1;
		if (temp[i - 1][j -1] != 1)
		{
			q.push(i - 1);
			q.push(j - 1);
		}
		if (temp[i ][j- 1] != 1)
		{
			q.push(i );
			q.push(j - 1);
		}
		if (temp[i + 1][j - 1] != 1)
		{
			q.push(i + 1);
			q.push(j - 1);
		}
		if (temp[i - 1][j ] != 1)
		{
			q.push(i - 1);
			q.push(j );
		}
		if (temp[i + 1][j ] != 1)
		{
			q.push(i + 1);
			q.push(j);
		}
		if (temp[i - 1][j + 1] != 1)
		{
			q.push(i - 1);
			q.push(j + 1);
		}
		if (temp[i ][j + 1] != 1)
		{
			q.push(i );
			q.push(j + 1);
		}
		if (temp[i + 1][j + 1] != 1)
		{
			q.push(i + 1);
			q.push(j + 1);
		}
	}

}
int main()
{
	int m, n;
	vector<vector<int>> bing;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> bing[m][n];
		}
	}
	bazhen(m, n, bing);
	return 0;
}
*/