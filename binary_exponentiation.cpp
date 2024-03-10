#include <iostream>

using namespace std;

int bin(int a, int n)
{
	if (n == 0)
		return 1;
	if (n % 2 == 1)
		return bin(a, n - 1) * a;
	else
	{
		int b = bin(a, n / 2);
		return b * b;
	}
}

int main()
{
	int a, n;
	cin >> a >> n;
	cout << bin(a, n);
	return 0;
}

