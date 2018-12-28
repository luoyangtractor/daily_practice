#include <iostream>
#include <vector>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
	bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites)
	{
		if (prerequisites.empty())return true;
		vector<int> start(numCourses, 0);
		unordered_map<int, vector<int>> map;
		for (auto iter : prerequisites)
		{
			start[iter.first] = 1;
			if (map.find(iter.second) == map.end())
			{
				map.insert(make_pair(iter.second, vector<int>{iter.first}));
			}
			else map[iter.second].push_back(iter.first);
		}
		vector<pair<int,int>> viewed(numCourses, make_pair(0, 0));
		queue<pair<int, int>> queue;
		for (int i = 0; i < start.size(); i++)
		{
			if (start[i] == 0)
			{
				cout << i << endl;
				queue.push(make_pair(i, 0));
			}
		}
		cout << endl;
		if (queue.empty())return false;
		while (!queue.empty())
		{

			int tmp = queue.front().first;
			int layer = queue.front().second;
			cout << tmp << endl;
			if (viewed[tmp].first == 1)
			{
				if (layer == viewed[tmp].second)continue;
				else return false;
			}
			else
			{
				viewed[tmp].second = layer;
				viewed[tmp].first = 1;
			}
			queue.pop();
			for (auto iter : map[tmp])
			{
				queue.push(make_pair(iter, layer+1));
			}
		}
		for (int i = 0; i < viewed.size(); i++)
		{
			if (viewed[i].first == 0)return false;
		}
		return true;
	}
};