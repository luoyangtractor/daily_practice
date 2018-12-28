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
	string multiply(string num1, string num2)
	{
		vector<int> n1, n2, temp;
		string ans;
		for (auto iter = num1.end() - 1; iter >= num1.begin(); iter--)
		{
			n1.push_back(*iter - '0');
		}
		for (auto iter = num2.end() - 1; iter >= num2.begin(); iter--)
		{
			n2.push_back(*iter - '0');
		}

		int cheng_size = n1.size();
		int beicheng_size = n2.size();
		int jinwei = 0;
		int he = 0;
		for (int i = 0; i < cheng_size; i++)
		{
			for (int j = 0; j < beicheng_size; j++)
			{

				if (i + j >= temp.size())
				{
					int zong = n1[i] * n2[j] + jinwei;
					jinwei = zong / 10;
					he = zong % 10;
					temp.push_back(he);
					if ((j == beicheng_size - 1) && (jinwei > 0))
					{
						temp.push_back(jinwei);
						jinwei = 0;
					}
				}
				else
				{
					int zong = n1[i] * n2[j] + jinwei;
					jinwei = zong / 10;
					he = zong % 10;
					temp[i + j] += he;
					if (temp[i + j]>9)
					{
						jinwei += 1;
						temp[i + j] -= 10;
					}
					if ((j == beicheng_size - 1) && (jinwei > 0))
					{
						if (i + j + 1 >= temp.size())
						{
							temp.push_back(jinwei);
							jinwei = 0;
						}
						else
						{
							temp[i + j + 1] += jinwei;
							jinwei = 0;
						}

					}
				}
			}
		}
		int flag = 0;
		for (auto iter = temp.end() - 1; iter >= temp.begin(); iter--)
		{
			if (*iter != 0)
			{
				flag = 1;
			}
			ans.push_back(*iter + '0');
		}
		if (flag == 0)
		{
			ans = "0";
		}
		return ans;
	}
};
*/
