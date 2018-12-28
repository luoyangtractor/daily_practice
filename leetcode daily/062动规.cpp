#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*
class Solution {
public:
	int uniquePaths(int m, int n)
	{
		vector<int> temp(m);
		for (int i = 0; i < m; i++)
		{
			temp[i] = 1;
		}
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (j - 1 >= 0)
				{
					temp[j] = temp[j - 1] + temp[j];
				}
				else
				{
					temp[j] = temp[j];
				}
                cout<<temp[j]<<endl;
			}
		}
		return temp[m-1];
	}
};

*/