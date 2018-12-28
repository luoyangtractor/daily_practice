#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
class Solution {
public:
	vector<int> grayCode(int n) {
		vector<int> result(1);
		for (int i = 0; i<n; i++)
		{
			for (int j = result.size() - 1; j >= 0; j--)
			{
				result.push_back((1 << i) + result[j]);
			}
		}
		return result;
	}

};
*/
