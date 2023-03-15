#include <bits/stdc++.h>

using namespace std;

int count_even(int* a, int len)
{
	cout << &a << endl;
	int cnt;
	for(int i = 0; i < len; i++)
	{
		if(*(a+i)%2==0)
		{
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	int n; cin >> n;
	int a[n];
	int cnt = 1;
	
	for(int i = 0; i < n; i++)
	{
		a[i] = cnt;
		cnt++;
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for(int j = 0; j < n; j++)
	{
		cout << &a[j] << " ";
	}
	
	int *ptr = &a[n/2];
	cout << endl;
	cout << "Total: " << count_even(a,n) << endl;
	cout << "5 Left: " << count_even(a, 5) << endl;
	cout << "5 Right: " << count_even(ptr,n) << endl;
	
}
