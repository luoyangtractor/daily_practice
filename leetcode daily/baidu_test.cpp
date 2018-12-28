
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
int a_to_b(string a, string b)
{
	vector<int> index;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == b[0]) index.push_back(i);
	}
	if (!index.empty())
	{
		for (int i = 0; i < index.size(); i++)
		{
			if (a.substr(index[i], a.size() - index[i]) == b.substr(0, a.size() - index[i]) &&
				(a.substr(0, index[i]) == b.substr(a.size() - index[i])))
			{
				return index[i];
			}
		}
	}
	return -1;
}

int count(vector<string> base)
{
	int min_step = INT_MAX;
	int temp_step = 0;
	vector<string> temp;
	for (int i = 0; i < base.size(); i++)
	{
		for (int j = 0; j < base.size(); j++)
		{
			if (i != j)
			{
				int t = a_to_b(base[j], base[i]);
				if (t == -1) return -1;
				temp_step += t;
			}
		}
		if (temp_step < min_step) min_step = temp_step;
		temp_step = 0;
	}
	return min_step;
}

int main()
{
	int n = 0;
	cin >> n;
	vector<string> base;
	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		base.push_back(temp);
	}
	cout<< count(base);

	while (cin >> n);
}
*/
