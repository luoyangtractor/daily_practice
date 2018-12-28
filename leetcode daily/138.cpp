//#include <iostream>
//#include <vector>;
//
//#include <unordered_map>
//
//using namespace std;
//
//struct RandomListNode
//{
//     int label;
//     RandomListNode *next, *random;
//     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
//};
//
//class Solution {
//public:
//	RandomListNode * copyRandomList(RandomListNode *head)
//	{
//		if (head == nullptr)return nullptr;
//
//		unordered_map<RandomListNode*, RandomListNode*> tmp;
//
//		RandomListNode* tmp_node = head;
//		RandomListNode* tmp_ans = new RandomListNode(0);
//		RandomListNode* ans = tmp_ans;
//		while (tmp_node != nullptr)
//		{
//			cout << tmp_node->label << endl;
//			RandomListNode* new_node = new RandomListNode(tmp_node->label);
//			tmp.insert(make_pair(tmp_node, new_node));
//			cout << "test" << endl;
//			tmp_ans->next = new_node;
//			tmp_node = tmp_node->next;
//			tmp_ans = tmp_ans->next;
//		}
//
//		tmp_ans = ans->next;
//		tmp_node = head;
//
//		while (tmp_node != nullptr)
//		{
//			auto iter = tmp.find(tmp_node->random);
//			if (iter != tmp.end())
//			{
//
//				tmp_ans->random = iter->second;
//			}
//
//			tmp_ans = tmp_ans->next;
//			tmp_node = tmp_node->next;
//		}
//		cout << "test2" << endl;
//		return ans->next;
//	}
//};