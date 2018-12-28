#include <iostream>
#include <vector>

using namespace std;
/*
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
	{
		vector<int> temp;
		auto iter1 = nums1.cbegin();
		auto iter2 = nums2.cbegin();
		if (nums1.empty())
		{
			temp = nums2;
		}
		else if (nums2.empty())
		{
			temp = nums1;
		}
		else
		{
			while (iter1 != nums1.cend() && iter2 != nums2.cend())
			{
				if (*iter1 <= *iter2)
				{
					if (iter1 <= nums1.cend())
					{
						temp.push_back(*iter1);
						iter1++;
						if (iter1 == nums1.cend())
						{
							for (; iter2 != nums2.cend(); iter2++)
							{
								temp.push_back(*iter2);
							}
							break;
						}

					}
				}
				else
				{
					if (iter2 <= nums2.cend())
					{
						temp.push_back(*iter2);
						iter2++;
						if (iter2 == nums2.cend())
						{
							for (; iter1 != nums1.cend(); iter1++)
							{
								temp.push_back(*iter1);
							}
							break;
						}

					}
				}
			}
		}
		
		auto iter = temp.cbegin();
		for (; iter < temp.cend(); iter++)
		{
			cout << *iter << endl;
		}
		cout << temp.size() << endl;
		if (temp.size() % 2 == 0)
		{
			return (double)(temp[temp.size() / 2 - 1] + temp[temp.size() / 2]) / 2;
		}
		else
		{
			return (double)temp[temp.size() / 2];
		}
	}
};

*/