#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
void quickSort(vector<int> &s, int l, int r)
{
	if (l<r)
	{
		int low = l;                            //左边第一个，因为第一个已经用pivot保存了  
		int high = r;                           //右边  
		int pivot = s[l];                     //第一个，已被保存  
		while (low<high)                       //当左小于右,当相等的时候会跳出循环  
		{
			while (low<high&&s[high] >= pivot)  // 从右向左找第一个小于x的数  
				high--;
			if (low<high)
				s[low++] = s[high];

			while (low<high&&s[low]<pivot)     // 从左向右找第一个大于等于x的数  
				low++;
			if (low<high)
				s[high--] = s[low];
		}
		s[low] = pivot;
		quickSort(s, l, low - 1);             //low左边递归调用  
		quickSort(s, low + 1, r);             //low右边递归调用  
	}
}

int partition(vector<int> &t,int left,int right)
{
	int flag = t[left];
	while (left < right)
	{
		while (left < right&&t[right] >= flag) right--;
		if (left < right)
		{
			t[left++] = t[right];
		}
		while (left < right&&t[left] < flag) left++;
		if (left < right)
		{
			t[right--] = t[left];
		}
		
	}
	t[left] = flag;
	return left;
}
void kuaipai(vector<int>& t, int left, int right)
{
	if (left < right)
	{
		int temp = partition(t, left, right);
		kuaipai(t, left, temp - 1);
		kuaipai(t, temp + 1, right);
	}
	
	return;
}


int main()
{

	vector<int> t(20, 0);
	for (int i = 0; i < t.size(); i++)
	{
		t[i] = rand();
		cout << t[i] << " ";
	}
	cout << endl;

	kuaipai(t, 0 ,19);
	//quickSort(t, 0, 19);
	for (int i = 0; i < t.size(); i++)
	{
		cout << t[i] << " ";
	}
	cout << endl;

	int a;
	while (cin >> a);
	return 0;
}

*/