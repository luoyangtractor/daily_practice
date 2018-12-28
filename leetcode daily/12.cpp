#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*
class Solution {
public:
	int rectCover(int number) {
		if (number == 0) return 0;
		if (number == 1)return 1;
		if (number == 2)return 2;

		int now = 2, temp = 1;
		for (int i = 3; i <= number; i++)
		{
			int t = now;
			now += temp;
			temp = t;
		}
		return now;
	}
};
*/