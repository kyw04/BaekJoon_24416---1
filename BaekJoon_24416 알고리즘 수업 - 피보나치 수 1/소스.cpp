#include <iostream>
using namespace std;

int cnt;
int fib(int n)
{
	if (n <= 2)
	{
		cnt++;
		return 1;
	}
	else
		return (fib(n - 1) + fib(n - 2));
}

int f[50];
int fibonacci(int n, int cnt)
{
	f[1] = 1, f[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		cnt++;
		f[i] = f[i - 1] + f[i - 2];
	}
	return cnt;
}

int main()
{
	int n;
	cin >> n;
	int fi = fib(n);
	cout << cnt << ' ' << fibonacci(n, 0);
}