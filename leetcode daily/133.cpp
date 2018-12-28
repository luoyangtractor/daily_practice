//
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <queue>
//
//using namespace std;
//
// struct UndirectedGraphNode {
//     int label;
//     vector<UndirectedGraphNode *> neighbors;
//     UndirectedGraphNode(int x) : label(x) {};
// };
//
//class Solution {
//public:
//	void dfs(UndirectedGraphNode *old_parent, UndirectedGraphNode *new_parent, unordered_map<int , UndirectedGraphNode *>& tmp_map)
//	{
//		
//		for (int i = 0; i < old_parent->neighbors.size(); i++)
//		{
//			if (old_parent->neighbors[i] == old_parent) new_parent->neighbors.push_back(new_parent);
//			else if (tmp_map.find(old_parent->neighbors[i]->label) != tmp_map.end()) new_parent->neighbors.push_back(tmp_map.find(old_parent->neighbors[i]->label)->second);
//			else
//			{
//				UndirectedGraphNode *new_node = new UndirectedGraphNode(old_parent->neighbors[i]->label);
//				new_parent->neighbors.push_back(new_node);
//				tmp_map.insert(make_pair(new_node->label , new_node));
//				dfs(old_parent->neighbors[i], new_node, tmp_map);
//			}
//		}
//	}
//	UndirectedGraphNode * cloneGraph(UndirectedGraphNode *node) 
//	{
//		if (node == nullptr) return nullptr;
//		unordered_map<int, UndirectedGraphNode *> tmp_map;
//		UndirectedGraphNode * new_parent = new UndirectedGraphNode(node->label);
//		dfs(node, new_parent, tmp_map);
//
//		return new_parent;
//	}
//};
