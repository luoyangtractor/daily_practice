#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;
/*
异或满足结合律

class Solution {

public:

	int singleNumber(vector<int>& nums)
	{
		int length = nums.size();
		int result = 0;
		for (int i = 0; i<length; i++)

		{
			result ^=  nums[i];
		}
		return result;
	}
};


int main ()
{
	int a = 20;
	Solution test;
	cout<<test.singleNumber(vector<int>{ 2,1,3,4,3,2,4 });
	return 0;

}

*/