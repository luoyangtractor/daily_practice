#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

/*
class Solution {
public:
	  int removeDuplicates(vector<int>& nums) {
		if (nums.size() <= 2)return nums.size();
        
		int last = nums[0];
		int count = 1;
		int step = 0;
		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] == last)
			{
				count++;
				if (count>2)step++;
				else
				{
					nums[i - step] = nums[i];
				}
			}
			else
			{
				nums[i - step] = nums[i];
				count = 1;
                last = nums[i];
			}
		}
		return nums.size() - step;
	}
};

int main()
{
	vector<int> temp = {1,1,1,2};
	Solution test;
	test.removeDuplicates(temp);

	int a;
	while (cin >> a);
	return 0;
}

*/
