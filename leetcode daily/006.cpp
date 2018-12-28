#include <iostream>
#include <string>

using namespace std;
/*
class Solution {
public:
	string convert(string s, int numRows)
	{
		if (s.size()<=numRows||numRows == 1)
		{
			return s;
		}
		int diff = numRows - 1;
		string ans;
		for (int i = 0; i < numRows; i++)
		{
			int k = 0;
			for (; i + k*(2 * numRows - 2) < s.size(); k++)
			{
				if (diff != 0 && diff != numRows-1&&k!=0)
				{
					ans.push_back(s[i + (k-1)*(2 * numRows - 2)+(2 * diff)]);
					ans.push_back(s[i + k*(2 * numRows - 2)]);
				}
				else
				{
					cout << i << " " << k <<" "<< s[i + k*(2 * numRows - 2)]<<endl;
					ans.push_back(s[i + k*(2 * numRows - 2)]);
				}
			}
			int len = i + (k - 1)*(2 * numRows - 2);
			if (len + 2 * diff>0 && (len + 2 * diff)<s.size() && diff != 0 &&  diff != numRows - 1)
			{
				ans.push_back(s[len + 2 * diff]);
			}
			diff--;
		}
		return ans;
	}
};

int main()
{
	Solution test = Solution();
	cout << test.convert("PATPALISHIRING", 3) << endl;
	return 0;
}
*/
