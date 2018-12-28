#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
struct Interval 
{
     int start;
     int end;
     Interval() : start(0), end(0) {}
     Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
	vector<Interval> merge(vector<Interval>& intervals)
	{
		int size = intervals.size();
		if (intervals.empty() || size == 1)
		{
			return intervals;
		}
		sort(intervals.begin(), intervals.end(), less);

		int current = 0;
		vector<Interval> ans;
		ans.push_back(intervals[0]);

		for (int i = 1; i < size; i++)
		{
			if (intervals[i].start <= ans[current].end)
			{
				ans[current].end = max(intervals[i].end, ans[current].end);
			}
			else
			{
				ans.push_back(intervals[i]);
				current++;
			}
		}

		return ans;
	}
	bool static less(const Interval& a, const Interval& b)
	{
		return a.start < b.start;
	}
	void test(const vector<Interval>& a)
	{
		int size = a.size();
		for (int i = 0; i < size; i++)
		{
			cout << a[i].start << " " << a[i].end << "   ";
		}
		cout << endl;
	}
};

*/