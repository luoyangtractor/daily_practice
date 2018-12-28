#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
/*
class Solution {
public:
	bool check_same(vector<int> &num, int start, int end, int target) {
		for (int i = start; i <= end; ++i) {
			if (num[i] == num[target])
				return false;
		}
		return true;
	}

	void dfs(vector<int> & num, int k, int n, vector<vector<int> >  & result) {
		if (k == n){
			result.push_back(num);
		}
		else {
			for (int i = k; i <= n; ++i) { //把num[k]和num[k]右边的所有点(包括num[k]自己)依次进行交换。  
				if (!check_same(num, k, i - 1, i)) continue; //如果有两个元素交换后的效果一致，则停止交换。  
				swap(num[k], num[i]); // 完成第k位置的交换  
				dfs(num, k + 1, n, result); //对第k位置右边的数进行dfs  
				swap(num[k], num[i]);//上面完成之后把k还原。  
			}
		}
	}
	vector<vector<int> > permuteUnique(vector<int> &num) {
		vector<vector<int> > result;
		std::sort(num.begin(), num.end());
		dfs(num, 0, num.size() - 1, result);
		return result;
	}
};
*/