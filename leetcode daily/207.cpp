//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <vector>
//#include <stack>
//#include <set>
//using namespace std;
//
//class Solution {
//public:
//	bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites)
//	{
//		vector<int> passed(numCourses, 0);
//		vector<int> start(numCourses, 0);
//		vector<unordered_set<int>> prior(numCourses, unordered_set<int>());
//		vector<unordered_set<int>> succesor(numCourses, unordered_set<int>());
//		for (int i = 0; i < prerequisites.size(); i++)
//		{
//			start[prerequisites[i].first] = 1;
//			prior[prerequisites[i].first].insert(prerequisites[i].second);
//			succesor[prerequisites[i].second].insert(prerequisites[i].first);
//		}
//		stack<int> tmp;
//		for (int i = 0; i < numCourses; i++)
//		{
//			if (start[i] == 0)
//			{
//				passed[i] = 1;
//				tmp.push(i);
//			}
//		}
//		while (!tmp.empty())
//		{
//			int current = tmp.top();
//			tmp.pop();
//			for (auto iter = succesor[current].begin(); iter != succesor[current].end(); iter++)
//			{
//				if (prior[*iter].size() <= 1)
//				{
//					if (passed[*iter] == 1)return false;
//					passed[*iter] = 1;
//					tmp.push(*iter);
//				}
//				prior[*iter].erase(current);
//
//			}
//			succesor[current].clear();
//		}
//		for (int i = 0; i < passed.size(); i++)
//		{
//			if (passed[i] == 0)return false;
//		}
//		return true;
//	}
//};