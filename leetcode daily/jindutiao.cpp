#include <iostream>
#include <string>
#include <time.h>

using namespace std;
/*
class ProgressBar
{
private:
	unsigned int length;
	unsigned int seconds;

public:
	ProgressBar(int len = 30,int sec = 2)
	{
		length = len;
		seconds = sec;
	}
	void display(int num)
	{
		int templen = num*length / 100;
		cout << "[";
		for (int i = 0; i < templen; i++)
		{
			cout << "=";
		}
		for (int i = 0; i < length - templen; i++)
		{
			cout << " ";
		}
		cout << "]" << num<<"%";
	}
	void erase()
	{
		for (int i = 0; i < length + 60; i++)
		{
			cout << "\b";
		}
	}
	void delay(long microseconds, int num)
	{
		clock_t time1 = clock();
		long long count=0;
		display(num);
		erase();
		while (1)
		{
			count++;
			clock_t time2 = clock();
			long long temp = (time2 - time1) * 1000 / CLOCKS_PER_SEC;
			if (temp<microseconds)
			{
				if (count % 10000 == 0)
				{
					display(num);
					erase();
				}
			}
			else
			{
				break;
			}
		}
		return;
	}
	void run()
	{
		for (int i = 1; i <= 100; i++)
		{
			delay(seconds*5, i);
		}
	}
};

int main()
{
	ProgressBar* test = new ProgressBar();
	test->run();
	int a;
	cin >> a;
	return 0;
}
*/
