#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
/*
bool time_cmp(vector<int> start, vector<int> end)
{
	//cout << start[0] <<" "<< start[1] <<" "<< end[0]<<" " << end[1] << endl;
	if (start[0] > end[0])
	{
		return true;
	}
	else if (start[0] == end[0])
	{
		if (start[1] > end[1])
		{
			return true;
		}
		return false;
	}
	return false;
}

void time_add(vector<int>& start, int go)
{
	cout << start[0] << "  yy   " << start[1] << endl;
	int jinwei = (start[1] + go) / 60;
	start[1] = (start[1] + go) % 60;
	
	start[0] += jinwei;
	cout << start[0] << "  yy   " << start[1] << endl;
}


int main()
{
	int hour = 0;
	int minute = 0;
	int n = 0;
	int go = 0;
	vector<vector<int>> clock;
	while (cin >> n)//注意while处理多个case
	{
		for (int i = 0; i < n; i++)
		{
			cin >> hour >> minute;
			vector<int> t = { hour, minute };
			clock.push_back(t);
		}
		sort(clock.begin(), clock.end(), time_cmp);
		cin >> go;
		
		cin >> hour >> minute;
		vector<int> course = {hour, minute};
		cout << "ww";

		int index = 0;
		for (int i = 0; i < n; i++)
		{
			vector<int> ttt = clock[i];
			time_add(clock[i], go);
			if (!time_cmp(clock[i], course))
			{
				cout << ttt[0] << " tt " << ttt[1] << endl;
				break;
			}
		}
	}
	return 0;
}
*/
