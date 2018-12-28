#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
/*
class Solution {
public:
	int maxArea(vector<int>& height)
	{
		int max_area = min(height[0],height[height.size()-1])*(height.size()-1);
		int i = 0, j = height.size() - 1;
		while (i!=j)
		{
			cout << i << " " << j << endl;
			if (height[i] < height[j])
			{
				if (min(height[i], height[j])*(j - i)>max_area)
				{
					max_area = min(height[i], height[j])*(j - i);
					
				}
				i++;
			}
			else
			{
				if (min(height[i], height[j])*(j - i)>max_area)
				{
					max_area = min(height[i], height[j])*(j - i);
				}
				j--;
			}
		}
		return max_area;
	}
};

int main()
{
	vector<int> height{2,3,10,5,7,8,9};
	Solution test = Solution();
	cout<<test.maxArea(height);
	return 0;
}
*/