/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> ans;
		ans.reserve(2);
		int len = nums.size();
		int flag = 0;
		for (int i = 0; i < len - 1; i++){
			if (flag == 1){
				break;
			}
			else{
				int temp = nums.at(i);
				for (int j = i + 1; j < len; j++){
					if (flag == 1){
						break;
					}
					else if (temp + nums.at(j) == target){
						cout << temp << " " << nums.at(j) << " " << target;
						ans.insert(ans.begin(), i);
						ans.insert(ans.begin() + 1, j);
						flag = 1;
					}
				}
			}
		}
		return ans;
	}
};


int main(){
	Solution test = Solution();
	vector<int> input;
	input.reserve(3);
	input.push_back(-3);
	input.push_back(4);
	input.push_back(3);
	vector<int> ans = test.twoSum(input, 0);
	return 0;
}
*/