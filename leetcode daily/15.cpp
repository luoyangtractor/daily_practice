#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cctype>
using namespace std;
/*
class Solution {
public:
	void reOrderArray(vector<int> &array) 
	{
		if (array.empty())return;
		int pos = 0;
		
		for (int i = 0; i < array.size(); i++)
		{
			int temp = 0;
			if (array[i] % 2 == 1)continue;
			else
			{
				pos = i;
				for (int j = i; j < array.size(); j++)
				{
					if (j != i&&array[j] % 2 == 1)
					{
						int t = array[j];
						for (int k = j; k > i; k--)
						{
							array[k] = array[k-1];
						}
						array[i] = t;
						temp = 1;
						break;
					}
				}
				if (temp == 0)return;
			}
		}
		return;
	}
};

int main()
{
	int a = 0;
	Solution test;
	vector<int> array = {1,2,3,4,5,6,7,8};
	test.reOrderArray(array);
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i]<< " ";
	}
	while (cin >> a);
	return 0;
}

*/