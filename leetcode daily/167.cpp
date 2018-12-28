//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& numbers, int target)
//	{
//		if (numbers.empty())return numbers;
//		vector<pair<int, int>>temp;
//		int pre_val = numbers[0], pre_pos = 0;
//		temp.push_back(make_pair(numbers[0], 0));
//		for (int i = 0; i < numbers.size(); i++)
//		{
//			if (i != 0 && numbers[i] + numbers[i - 1] == target)
//			{
//				return vector<int>{i, i + 1};
//			}
//			if (numbers[i] != pre_val)
//			{
//				temp.push_back(make_pair(numbers[i], i));
//				pre_val = numbers[i];
//			}
//		}
//		for (int i = 0; i < temp.size(); i++)
//		{
//			for (int j = i; j < temp.size(); j++)
//			{
//				//cout << temp[i].first << " " << temp[j].first << endl;
//				if (i != j && temp[i].first + temp[j].first == target)
//				{
//					auto aa = vector<int>{ temp[i].second + 1, temp[j].second + 1 };
//					return aa;
//				}
//				if (i != j && temp[i].first + temp[j].first > target)break;
//			}
//		}
//		return vector<int>(0, 0);
//	}
//};
//
