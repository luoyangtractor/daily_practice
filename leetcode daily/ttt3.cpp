#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
/*
using namespace std;
vector<string> sep = { "..", "..", "..", "..", ".." };

vector<string> zero = { "66666", "6...6", "6...6", "6...6", "66666" };
vector<string> one = { "....6", "....6", "....6", "....6", "....6" };
vector<string> two = { "66666", "....6", "66666", "6....", "66666" };
vector<string> three = { "66666", "....6", "66666", "....6", "66666" };
vector<string> four = { "6...6", "6...6", "66666", "....6", "....6" };
vector<string> five = { "66666", "6....", "66666", "....6", "66666" };
vector<string> six = { "66666", "6....", "66666", "6...6", "66666" };
vector<string> seven = { "66666", "....6", "....6", "....6", "....6" };
vector<string> eight = { "66666", "6...6", "66666", "6...6", "66666" };
vector<string> nine = { "66666", "6...6", "66666", "....6", "66666" };
vector<vector<string>> sss = { zero, one, two, three, four, five, six, seven, eight, nine };
vector<int> proc(string &in)
{
	vector<int> t;
	int size = in.size();
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (in[i] == '+' || in[i] == '-' || in[i] == '*')
		{
			index = i;
			break;
		}
	}
	string op1 = in.substr(0, index);
	string op2 = in.substr(index+1, size -index);
	int opp1 = stoi(op1);
	int opp2 = stoi(op2);
	int ans = 0;
	if (in[index] == '+')
	{
		ans = opp1 + opp2;
	}
	else if (in[index] == '-')
	{
		ans = opp1 - opp2;
	}
	else if (in[index] == '*')
	{
		ans = opp1 * opp2;
	}
	while (ans > 0)
	{
		t.push_back(ans % 10);
		ans /= 10;
	}
	return t;
}
int main() 
{
	string test = "22+141";
	proc(test);

	int n;
	while (cin >> n)//注意while处理多个case
	{
		vector<vector<int>> temp;
		vector<int> t;
		string in;
		for (int i = 0; i < n; i++)
		{
			cin>>in;
			t = proc(in);
			temp.push_back(t);
		}
		for (int i = 0; i < n; i++)
		{
			int ans_size = temp[i].size();
			
			for (int k = 0; k < 5; k++)
			{
				for (int j = ans_size - 1; j >= 0; j--)
				{
					cout << sss[temp[i][j]][k];
					if (j != 0)
					{
						cout << sep[k];
					}
				}
				
				cout << endl;
			}
		}
	}
	return 0;
}
*/


