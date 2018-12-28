//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct ListNode 
//{
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* reverse(ListNode* old_head)
//	{
//		if (old_head == nullptr || old_head->next == nullptr)return old_head;
//		ListNode* tmp = old_head->next;
//		ListNode* tmp_pre = old_head;
//		old_head->next == nullptr;
//		while (tmp != nullptr)
//		{
//			ListNode* t = tmp;
//			tmp = tmp->next;
//			t->next = tmp_pre;
//			tmp_pre = t;
//		}
//		old_head->next = nullptr;
//		return tmp_pre;
//	}
//	void reorderList(ListNode* head)
//	{
//		if (head == nullptr || head->next == nullptr)return;
//		ListNode* tmp = head;
//		int len = 0;
//		while (tmp != nullptr)
//		{
//			tmp = tmp->next;
//			len++;
//		}
//		int mid = (len + 1) / 2;
//		tmp = head;
//		ListNode* ttt = tmp;
//		for (int i = 1; i <= mid; i++)
//		{
//			ttt = tmp;
//			tmp = tmp->next;
//		}
//		ttt->next = nullptr;
//		cout << len << " " << mid << " " << tmp->val << endl;
//		ListNode* new_list = reverse(tmp);
//		tmp = head;
//		{
//			ListNode* n = new_list;
//			ListNode* o = tmp;
//			while (n != nullptr)
//			{
//				cout << n->val << " ";
//				n = n->next;
//			}
//			cout << endl;
//			while (o != nullptr)
//			{
//				cout << o->val << " ";
//				o = o->next;
//			}
//		}
//		while (tmp != nullptr && new_list != nullptr)
//		{
//			ListNode* old_t = tmp;
//			tmp = tmp->next;
//			ListNode* new_t = new_list;
//			new_list = new_list->next;
//
//			if (old_t->next != nullptr)new_t->next = old_t->next;
//			old_t->next = new_t;
//
//		}
//	}
//};