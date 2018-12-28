#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cctype>
using namespace std;
/*
class Solution {
public:
	vector<vector<int>> combine(int n, int k) {
		vector<vector<int>> ans;
		vector<int> nn;
		for (int i = 0; i < n; i++)
		{
			nn.push_back(i+1);
		}
		vector<int> temp;
		digui(ans, nn, k, temp);
		return ans;
	}
	void digui(vector<vector<int>>& ans, vector<int> nn, int k, vector<int> temp)
	{
		if (k == 0)
		{
			ans.push_back(temp);
			return;
		}
		int size = temp.size();
		for (int i = 0; i < nn.size(); i++)
		{
			if (nn[i] != 0)
			{
				temp.push_back(nn[i]);
				nn[i] = 0;
				digui(ans, nn, k - 1, temp);
				//nn[i] = i + 1;
				temp.erase(temp.begin()+size);
			}
		}
	}
};

int main(void)
{
	Solution test;
	test.combine(4,2);
	int a;
	while (cin>>a);
	return 0;
}
*/
