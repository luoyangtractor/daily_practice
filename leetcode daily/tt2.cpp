#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
/*
using namespace std;
void op1(string& s, string& m)
{
	m = s;
	s += s;
}

void op2(string& s, string& m)
{
	s += m;
}
void digui(string s, string m, int len, int steps, vector<int>& temp)
{
	//cout << s.size() << " ";
	if (s.size() < len)
	{
		string ss = s;
		string mm = m;
		op1(ss, mm);
		digui(ss, mm, len, steps+1, temp);

		string sss = s;
		string mmm = m;
		op2(sss, mmm);
		digui(sss, mmm, len, steps+1, temp);
	}
	else if (s.size() == len)
	{
		temp.push_back(steps);
	}
	else
	{
		return;
	}
}

int main() {
	string s = "a";
	string m = s;
	int len = 0;
	while (cin >> len)//注意while处理多个case
	{
		int ans = INT_MAX;
		vector<int> temp;
		digui(s, m, len, 0, temp);

		int size = temp.size();
		for (int i = 0; i < size; i++)
		{
			//cout << temp[i] << "  ";
			if (temp[i] < ans)
			{
				ans = temp[i];
			}
		}
		
		cout << ans;
	}
	return 0;
}
*/


