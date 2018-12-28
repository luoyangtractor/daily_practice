#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*
class Solution {
public:
	string getPermutation(int n, int k) 
	{
		vector<int> candidate;
		for (int i = 1; i < n + 1; i++)
		{
			candidate.push_back(i);
		}
		int tempk = k;
		string ans;
		for (int i = 1; i < n + 1; i++)
		{
			int t = dingwei(candidate, tempk, n, i);
			ans.push_back(t + '0');
		}
		return ans;
	}
	int dingwei(vector<int>& candidate, int& tempk, int n, int wei)
	{
		if (wei == n)
		{
			return candidate[0];
		}
		int temp = jiecheng(n - wei);
		int index = (tempk - 1) / temp ;
		int ret = candidate[index];
		candidate.erase(candidate.begin() + index, candidate.begin() + index + 1);
		tempk = (tempk - 1)% temp + 1;
		return ret;
	}
	int jiecheng(int n)
	{
		if (n == 1)
		{
			return 1;
		}
		return n*jiecheng(n - 1);
	}
};

int main()
{
	Solution test;
	cout << test.getPermutation(3, 5) << endl;
	int x;
	cin >> x;
	return 0;
}

*/