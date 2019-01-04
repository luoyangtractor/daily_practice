//#include <string>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct trie_node
//{
//	char data;
//	vector<trie_node*> child;
//	bool is_word;
//	trie_node(char c = 'a', bool iw = false, vector<trie_node*> ch = vector<trie_node*>()) :data(c), child(ch), is_word(iw) {}
//};
//
//class Trie {
//public:
//	trie_node* root = new trie_node();
//
//	/** Initialize your data structure here. */
//	Trie() {
//		//trie_node* root = new trie_node();
//		//cout<<"root  "<<root->child.size()<<"   "<<root<<endl;
//	}
//
//	/** Inserts a word into the trie. */
//	void insert(string word) {
//		trie_node* current = root;
//		for (int i = 0; i < word.size(); i++)
//		{
//			int flag = 0;
//			for (int j = 0; j < current->child.size(); j++)
//			{
//				trie_node* next = current->child.at(j);
//				if (next != nullptr && next->data == word[i])
//				{
//					if (i == word.size() - 1)next->is_word = true;
//					current = next;
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 0)
//			{
//				trie_node* next;
//				if (i != word.size() - 1) next = new trie_node(word[i], false);
//				else next = next = new trie_node(word[i], true);
//				current->child.push_back(next);
//				current = next;
//			}
//		}
//	}
//
//	/** Returns if the word is in the trie. */
//	bool search(string word) {
//		trie_node* current = root;
//		for (int i = 0; i < word.size(); i++)
//		{
//			int flag = 0;
//			for (int j = 0; j < current->child.size(); j++)
//			{
//				trie_node* next = current->child.at(j);
//				if (next != nullptr && next->data == word[i])
//				{
//					if (i == word.size() - 1 && !next->is_word) return false;
//					current = next;
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 0)return false;
//		}
//		return true;
//	}
//
//	/** Returns if there is any word in the trie that starts with the given prefix. */
//	bool startsWith(string prefix) {
//		trie_node* current = root;
//		for (int i = 0; i < prefix.size(); i++)
//		{
//			int flag = 0;
//			bool is_word = current->is_word;
//			for (int j = 0; j < current->child.size(); j++)
//			{
//				trie_node* next = current->child.at(j);
//				if (next != nullptr && next->data == prefix[i])
//				{
//					current = next;
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 0)return false;
//		}
//		return true;
//	}
//};
//
///**
// * Your Trie object will be instantiated and called as such:
// * Trie obj = new Trie();
// * obj.insert(word);
// * bool param_2 = obj.search(word);
// * bool param_3 = obj.startsWith(prefix);
// */
