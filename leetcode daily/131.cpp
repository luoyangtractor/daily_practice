//class Solution {
//public:
//	bool valid(string s)
//	{
//		if (s.length() <= 1) return true;
//		for (int i = 0; i <= (s.length() - 1) / 2; i++)
//		{
//			if (s[i] != s[s.length() - 1 - i])return false;
//		}
//		return true;
//	}
//
//	void digui(string s, int index, vector<vector<string>>& ans, vector<string> tmp)
//	{
//		if (index == s.length())
//		{
//			ans.push_back(tmp);
//			return;
//		}
//		for (int i = index; i <= s.length(); i++)
//		{
//
//			if (i != index && valid(s.substr(index, i - index)))
//			{
//				vector<string> tmp2(tmp);
//				// cout<<i<<" "<<index<<" "<<s.substr(index, i - index)<<endl;
//				tmp2.push_back(s.substr(index, i - index));
//				digui(s, i, ans, tmp2);
//			}
//		}
//
//	}
//	vector<vector<string>> partition(string s)
//	{
//		vector<vector<string>> ans;
//		digui(s, 0, ans, vector<string>());
//		return ans;
//	}
//};