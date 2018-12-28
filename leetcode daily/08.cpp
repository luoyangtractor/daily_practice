#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		if (rotateArray.empty()) return 0;
		for (int i = 0; i<rotateArray.size(); i++)
		{
			if (i + 1<rotateArray.size() && rotateArray[i + 1]<rotateArray[i])return rotateArray[i + 1];
		}
		return rotateArray[0];
	}
};

*/