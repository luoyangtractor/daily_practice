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
			for (int i = k; i <= n; ++i) { //��num[k]��num[k]�ұߵ����е�(����num[k]�Լ�)���ν��н�����  
				if (!check_same(num, k, i - 1, i)) continue; //���������Ԫ�ؽ������Ч��һ�£���ֹͣ������  
				swap(num[k], num[i]); // ��ɵ�kλ�õĽ���  
				dfs(num, k + 1, n, result); //�Ե�kλ���ұߵ�������dfs  
				swap(num[k], num[i]);//�������֮���k��ԭ��  
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