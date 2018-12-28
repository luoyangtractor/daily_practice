//#include <iostream>
//#include <unordered_set>
//#include <queue>
//
//using namespace std;
//
//class Solution {
//public:
//	int findKthLargest(vector<int>& nums, int k)
//	{
//		priority_queue <int, vector<int>, greater<int> >queue;
//		for (auto iter = nums.begin(); iter != nums.end(); iter++)
//		{
//			if (queue.size() < k)queue.push(*iter);
//			else
//			{
//				int tmp = queue.top();
//				if (tmp < *iter)
//				{
//					queue.pop();
//					queue.push(*iter);
//				}
//			}
//		}
//		return queue.top();
//	}
//};