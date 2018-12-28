#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
	{
		int a2 = n-1, a1 = m-1;
		for (int i = m + n -1; i >= 0; i--)
		{
			if (a2 >= 0 && a1 >= 0)
			{
				if (nums2[a2] <= nums1[a1])
				{
					nums1[i] = nums1[a1];
					a1--;
				}
				else
				{
					nums1[i] = nums2[a2];
					a2--;
				}
			}
			else if (a1 >= 0)
			{
				nums1[i] = nums1[a1];
				a1--;
			}
			else
			{
				nums1[i] = nums2[a2];
				a2--;
			}
		}
	}
};
*/
