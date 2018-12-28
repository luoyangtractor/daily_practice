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
		int low = l;                            //��ߵ�һ������Ϊ��һ���Ѿ���pivot������  
		int high = r;                           //�ұ�  
		int pivot = s[l];                     //��һ�����ѱ�����  
		while (low<high)                       //����С����,����ȵ�ʱ�������ѭ��  
		{
			while (low<high&&s[high] >= pivot)  // ���������ҵ�һ��С��x����  
				high--;
			if (low<high)
				s[low++] = s[high];

			while (low<high&&s[low]<pivot)     // ���������ҵ�һ�����ڵ���x����  
				low++;
			if (low<high)
				s[high--] = s[low];
		}
		s[low] = pivot;
		quickSort(s, l, low - 1);             //low��ߵݹ����  
		quickSort(s, low + 1, r);             //low�ұߵݹ����  
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