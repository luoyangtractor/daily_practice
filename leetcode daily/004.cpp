#include <iostream>
#include <vector>

/*

using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
	{
		long middle1 = 0, middle2 = 0;
		long len = nums1.size() + nums2.size();
		if (len % 2 == 0)
		{
			middle1 = len / 2;
			middle2 = len / 2 + 1;
		}
		else
		{
			middle1 = len / 2 + 1;
			middle2 = middle1;
		}
		if (nums1.empty())
		{
			return (double)(nums2[middle1] + nums2[middle2]) / 2;
		}
		if (nums2.empty())
		{
			return (double)(nums1[middle1] + nums1[middle2]) / 2;
		}
//		cout << len << endl << middle1 << endl << middle2 << endl;
		long left_pos = 0, right_pos = 0, count = 0;
		int left_elem = 0, right_elem = 0;
		int temp_value=0, left_value = 0, right_value = 0;
		if (!nums1.empty())
		{
			left_value = nums1[0];
		}
		if (!nums2.empty())
		{
			right_value = nums2[0];
		}

		while (1)
		{
			if (left_pos>nums1.size()-1 && count<middle1)
			{
				if (len % 2 == 0)
				{
					return (double)(nums2[middle1 - count + right_pos - 1] + nums2[middle1 - count + right_pos]) / 2;
				}
				else
				{
					return (double)nums2[middle1 - count + right_pos - 1];
				}
			}
			if (right_pos>nums2.size() - 1 && count<middle1)
			{
				if (len % 2 == 0)
				{
					return (double)(nums1[middle1 - count + left_pos - 1] + nums1[middle1 - count + left_pos]) / 2;
				}
				else
				{
					return (double)nums1[middle1 - count + left_pos - 1];
				}
			}
			left_elem = nums1[left_pos];
			right_elem = nums2[right_pos];
			

			if (left_elem <= right_elem )
			{
				temp_value = left_elem;
				left_pos++;
				count++;
			}
			else if (left_elem >= right_elem )
			{
				temp_value = right_elem;
				right_pos++;
				count++;
			}
			if (count == middle1)
			{
				left_value = temp_value;
				cout << "fuafuafua   " << left_value << endl;
				if (len % 2 == 1)
				{
					return left_value;
				}
				if (left_pos > nums1.size() - 1)
				{
					return (double)(left_value + nums2[right_pos]) / 2;
				}
				if (right_pos > nums2.size() - 1)
				{
					return (double)(nums1[left_pos] + left_value) / 2;
				}
			}
			if (count == middle2)
			{
				right_value = temp_value;
				break;
			}
		}
		cout << left_value<< endl << right_value << endl;
		return (double)(left_value + right_value) / 2;
	}
};

int main()
{
	Solution test = Solution();
	vector<int> nums1{ 2 };
	vector<int> nums2{ 1, 3, 4, 5};
	cout<<test.findMedianSortedArrays(nums1, nums2)<<endl;
	return 0;
}
*/
