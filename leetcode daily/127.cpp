//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <unordered_map>
//
//using namespace std;
//
//
//class Solution {
//public:
//	int ladderLength(string beginWord, string endWord, vector<string>& wordList)
//	{
//		unordered_map<string, int> temp_map;
//		for (int i = 0; i < wordList.size(); i++)
//		{
//			temp_map.insert(make_pair(wordList[i], 0));
//		}
//		temp_map[beginWord] = 1;
//		queue<pair<string, int>> queue;
//		queue.push(make_pair(beginWord, 1));
//		int ans = 0;
//		while (!queue.empty())
//		{
//			auto tmp = queue.front();
//			queue.pop();
//			for (auto iter = temp_map.begin(); iter != temp_map.end(); iter++)
//			{
//				if (iter->second != 1&&valid(iter->first,tmp.first))
//				{
//					if (iter->first == endWord) return tmp.second + 1;
//					temp_map[iter->first] = 1;
//					queue.push(make_pair(iter->first, tmp.second+1));
//				}
//			}
//		}
//		return 0;
//	}
//	bool valid(string current, string compare)
//	{
//		if (current.size() == compare.size())
//		{
//			int flag = 0;
//			for (int i = 0; i < compare.size(); i++)
//			{
//				if (current[i] != compare[i])flag++;
//				if (flag > 1)break;
//			}
//			if (flag == 1)return true;
//		}
//		return false;
//	}
//	void print(unordered_map<string, int> map)
//	{
//		cout << "---------------------" << endl;
//		for (auto iter = map.begin(); iter != map.end(); iter++)
//		{
//			cout << iter->first << " " << iter->second << endl;
//		}
//		cout << endl << endl;
//	}
//};