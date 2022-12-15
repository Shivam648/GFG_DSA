#include <bits/stdc++.h>
using namespace std;

void bonacciseries(long m, int n)
{
	int a[n] = { 0 };
	a[m - 1] = 1;

	for (int i = m; i < n; i++)
		for (int j = i - m; j < i; j++)
			a[i] += a[j];

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

int main()
{
	int m = 4, n =10;
	bonacciseries(m, n);
	return 0;
}
