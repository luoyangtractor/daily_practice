//#include <iostream>
//#include <vector>
//#include <stack>
//#include <set>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites)
//	{
//		vector<int> ans;
//		vector<int> start(numCourses, 0);
//		vector<int> passed(numCourses, 0);
//		vector<set<int>> prior(numCourses, set<int>());
//		vector<set<int>> successor(numCourses, set<int>());
//
//		for (int i = 0; i < prerequisites.size(); i++)
//		{
//			int f = prerequisites[i].first;
//			int s = prerequisites[i].second;
//			prior[f].insert(s);
//			successor[s].insert(f);
//			start[f] = 1;
//		}
//
//		stack<int> stack;
//		for (int i = 0; i < start.size(); i++)
//		{
//			if (start[i] == 0)
//			{
//				stack.push(i);
//				passed[i] = 1;
//				ans.push_back(i);
//			}
//		}
//
//		while (!stack.empty())
//		{
//			int current = stack.top();
//			stack.pop();
//
//			for (auto iter = successor[current].begin(); iter != successor[current].end(); iter++)
//			{
//				int next = *iter;
//				if (prior[next].size() <= 1)
//				{
//					if (passed[next] == 1)return vector<int>();
//					stack.push(next);
//					ans.push_back(next);
//					passed[next] = 1;
//				}
//				prior[next].erase(current);
//			}
//			successor[current].clear();
//
//		}
//		for (int i = 0; i < passed.size(); i++)
//		{
//			if (passed[i] == 0) return vector<int>();
//		}
//		return ans;
//
//	}
//};
//
