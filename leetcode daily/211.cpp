//#include <string>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <stack>
//using namespace std;
//
//struct tree_node
//{
//	char data;
//	bool end;
//	int layer;
//	vector<tree_node*> next;
//	tree_node(char data = '=', bool end = false, int layer = -1, vector<tree_node*> next = vector<tree_node*>())
//		: data(data), end(end), layer(layer), next(next) {}
//};
//
//class WordDictionary {
//public:
//	tree_node* root = new tree_node();
//	/** Initialize your data structure here. */
//	WordDictionary() {
//
//	}
//
//	/** Adds a word into the data structure. */
//	void addWord(string word) {
//
//		tree_node* current = root;
//		for (int i = 0; i < word.size(); i++)
//		{
//			int flag = 0;
//			for (int j = 0; j < current->next.size(); j++)
//			{
//				tree_node* tmp_next = current->next.at(j);
//				if (tmp_next->data == word[i])
//				{
//					flag = 1;
//					current = tmp_next;
//					break;
//				}
//			}
//			if (flag == 0)
//			{
//				tree_node* tmp_next;
//
//				if (i == word.size() - 1)tmp_next = new tree_node(word[i], true, i);
//				else tmp_next = new tree_node(word[i], false, i);
//				//cout<<"add "<<tmp_next->data<<" "<<tmp_next->layer<<endl;
//				current->next.push_back(tmp_next);
//				current = tmp_next;
//			}
//		}
//	}
//
//	/** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
//	bool search(string word) {
//		//cout<<word<<endl;
//		stack<tree_node*> stack;
//		stack.push(root);
//		while (!stack.empty())
//		{
//			tree_node* current = stack.top();
//			stack.pop();
//			int flag = 0;
//			for (int j = 0; j < current->next.size(); j++)
//			{
//				tree_node* tmp_next = current->next.at(j);
//				int index = tmp_next->layer;
//				//cout<<current->data<<"  "<<tmp_next->data<<"  "<<tmp_next->layer <<endl;
//				if (tmp_next->data == word[index] || word[index] == '.')
//				{
//					if (index == word.size() - 1 && tmp_next->end)return true;
//					//cout<<current->data<<"     "<<tmp_next->data<<endl;
//					stack.push(tmp_next);
//					flag = 1;
//				}
//			}
//			//if (flag == 0)return false;
//		}
//		return false;
//
//	}
//};
//
///**
// * Your WordDictionary object will be instantiated and called as such:
// * WordDictionary obj = new WordDictionary();
// * obj.addWord(word);
// * bool param_2 = obj.search(word);
// */