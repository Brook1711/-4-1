#include<iostream>

using namespace std;

bool judge(int pi)
{
	long int j = 10, count = 0;
	int a[5] = { 0 };
	bool T = false;
	int left = pi % 7;
	if (left == 0)
	{
		T = true;
	}
	else
	{
		while (pi > 0)
		{
			a[count] = pi % j;
			pi -= a[count];
			a[count] = a[count] / (j / 10);
			j *= 10;
			if (a[count] == 7)
			{
				T = true;
				break;
			}
			count++;
		}
	}

	return T;
}

int Count(int * p, int N)
{
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (judge(p[i]))
			count++;
	}
	return count;
}

int main()
{
	int N = 0;
	cin >> N;
	int p[30000] = { 0 };
	for (int i = 0; i < N; i++)
	{
		p[i] = i + 1;
	}
	cout << Count(p, N);

	return 0;
}