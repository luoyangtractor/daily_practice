//#include <iostream>
//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//	bool dfs(vector<int>& gas, vector<int>& cost, int start, int current_pos, int current_oil)
//	{
//		current_oil += gas[current_pos];
//		int next = 0;
//		if (current_pos + 1 == cost.size())next = 0;
//		else next = current_pos+1;
//		if (next == start && current_oil >= cost[current_pos]) return true;
//		if ( cost[current_pos] <= current_oil)
//		{
//			if (dfs(gas, cost,start, next, current_oil - cost[current_pos])) return true;
//
//		}
//		return false;
//	}
//	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
//	{
//		unordered_set<int> record;
//		for (int i = 0; i < gas.size(); i++)
//		{
//			if (dfs(gas, cost,i, i, 0))return i;
//		}
//		return -1;
//	}
//};