#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
int find_max(vector<vector<int>>& bian, int n)
{
	int max_val = INT_MIN;
	for (int i = 0; i < n;i++)
	{
		int value = 0;
		dps(bian, i, value);
		if (value>max_val) max_val = value;
	}
	return max_val;
}
void dps(vector<vector<int>>& bian, int begin, int& count)
{
	for (int i = 0; i < bian.size(); i++)
	{
		if (bian[i][0] == begin)
		{
			count += 1;
			dps(bian, bian[i][1], count);
		}
	}
	return;
}
int main()
{
	int m, n,tt;
	cin >> n;
	cin >> m >> tt;
	vector<vector<int>> bian (m, vector<int>(2, 0));
	for (int i = 0; i < m; i++)
	{
		cin >> bian[i][0] >> bian[i][1];
	}
	cout << find_max(bian, n);
	return 0;

}

*/