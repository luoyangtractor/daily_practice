#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <algorithm>

using namespace std;
/*
class Solution {
public:
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
	{
		set<vector<int>> ans;
		vector<int> temp;
		sort(candidates.begin(), candidates.begin() + candidates.size());
		digui(candidates, target, ans, temp, 0);

		vector<vector<int>> ret;

		for (auto iter = ans.begin(); iter != ans.end(); iter++)
		{
			ret.push_back(*iter);
		}
		return ret;
	}
	void digui(vector<int>& candidates, int target, set<vector<int>>& ans, vector<int> temp, int index)
	{
		int tempsum = 0;
		for (auto iter = temp.begin(); iter < temp.end(); iter++)
		{
			tempsum += *iter;
		}
		for (auto iter = candidates.begin() + index; iter < candidates.end(); iter++)
		{
			//cout<<*iter<<endl;
			if (*iter + tempsum<target)
			{
				vector<int>temp1(temp);
				temp1.push_back(*iter);
				digui(candidates, target, ans, temp1, iter - candidates.begin() + 1);
			}
			else if (*iter + tempsum == target)
			{
				vector<int>temp1(temp);
				temp1.push_back(*iter);
				//sort(temp1.begin(), temp1.begin() + temp1.size());
				ans.insert(temp1);
				break;
			}
		}
		temp.clear();
		return;
	}
};
*/