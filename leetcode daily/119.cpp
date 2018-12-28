#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits.h>
using namespace std;

/*
class Solution {
public:
	vector<int> getRow(int rowIndex) 
	{
		vector<int> last;
		for (int i = 0; i <= rowIndex; i++)
		{
			vector<int> temp;
			if (i == 0)
			{
				temp.push_back(1);
				last = temp;
				continue;
			}
			else if (i == 1)
			{
				temp.push_back(1);
				temp.push_back(1);
				last = temp;
				continue;
			}

			temp.push_back(1);
			for (int j = 0; j < i - 1; j++)
			{
				int sum = last[j] + last[j + 1];
				temp.push_back(sum);
			}
			temp.push_back(1);
			last = temp;
		}
		return last;
	}
};

*/