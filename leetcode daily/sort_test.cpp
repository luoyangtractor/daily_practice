#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cctype>
#include <ctime>
using namespace std;

/*
void vec_out(const vector<int>& test);
void digui(int left, int right, vector<int>& test);
int partition(int left, int right, vector<int>& test);

vector<int> vec_generator(unsigned int seed, int length);
vector<int>& str_to_vec(string temp);
class sort_test
{
private:
	vector<int> test;
public:
	sort_test();
	void set_vec(vector<int>& t);
	vector<int>& get_vec();
	int maopao();
	int charu();
	int xuanze();
	int kuaipai();
	int duipai();
	~sort_test();
};

sort_test::sort_test()
{
}

sort_test::~sort_test()
{
	vector<int>().swap(test);
}

void sort_test::set_vec(vector<int>& t)
{
	test = t;
}

vector<int>& sort_test::get_vec()
{
	return test;
}

int sort_test::maopao()
{
	if (test.empty()) return 0;
	int j = (int)test.size();
	for (;j>=0;j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (i + 1<test.size() && test[i + 1] < test[i]) swap(test[i], test[i + 1]);
		}
	}
	return 0;
}

int sort_test::xuanze()
{
	if (test.empty()) return 0;
	int flag = test.size() - 1;
	while (flag != 0)
	{
		int min = INT_MIN;
		int min_pos = -1;
		for (int i = 0; i <= flag; i++)
		{
			if (test[i] > min)
			{
				min = test[i];
				min_pos = i;
			}
		}
		swap(test[min_pos], test[flag]);
		flag--;
	}
	return 0;
}

int sort_test::kuaipai()
{
	if (test.empty()) return 0;
	digui(0, test.size()-1, test);
	return 0;
}

void digui(int left, int right, vector<int>& test)
{
	static int count = 0;
	count++;
	if (left == right) return;
	int mid = partition(left, right, test);
	cout << "iter "<<count<<" : ";
	vec_out(test);
	digui(left, mid, test);
	digui(mid + 1, right, test);
}

int partition(int left, int right, vector<int>& test)
{
	int l = left, r = right,flag=test[left];
	while (l < r)
	{
		while (l<r && test[r] >= flag)
		{
			r--;
		}
		if (l<r)
		{
			test[l++] = test[r];
		}
		while (l<r && test[l] < flag)
		{
			l++;
		}
		if (l < r)
		{
			test[r--] = test[l];
		}
		
	}
	test[l] = flag;
	return l;
}

int sort_test::duipai()
{

}


vector<int> vec_generator(unsigned int seed, int length)
{
	vector<int> test;
	srand(seed);
	for (int i = 0; i < length; i++)
	{
		test.push_back(rand()%100);
	}
	return test;
}

vector<int>& str_to_vec(string temp)
{
	vector<int> test;
	string a;
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] == ',')
		{
			test.push_back(stoi(a));
			a = "";
		}
		else
		{
			a += (temp[i]);
		}
	}
	return test;
}

void vec_out(const vector<int>& test)
{
	for (int i = 0; i < (int)test.size(); i++)
	{
		cout << test[i] << " ";
	}
	cout << endl << endl;
}

int main()
{
	int len = 30,iter = 0;
	cout << "please input iteration number£º";
	cin >> iter; cout << endl;

	sort_test t;
	for (int i = 0; i < iter; i++)
	{
		int seed = rand();
		int length = rand() % (len);
		t.set_vec(vec_generator(seed, length));
		cout << "before sort: ";
		vec_out(t.get_vec());
		t.kuaipai();
		cout << "after  sort: ";
		vec_out(t.get_vec());
		cout <<"==========================================================================================================="<< endl;
	}

	int n;
 	while (cin>>n){}
	return 0;
}

*/