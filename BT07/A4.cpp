#include <bits/stdc++.h>
using namespace std;

bool bin_search(int *a, int n, int x)
{
	int l = 0, r = n-1;
	while(l <= r)
	{
		int mid = (l+r)/2;
		if(x < *(a+mid))
		{
			r = mid-1;
		}
		else if(x > *(a+mid))
		{
			l = mid + 1;
		}
		if(*(a+mid) == x)
		{
			return true;
		}
	}
	return false;
}


int main()
{
	int n; cin >> n;
	int *a = new int [n];
	bool random = false;
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		random = rand()%2;
		while(random)
		{
			random = rand()%2;
			cnt++;
		}
		*(a+i) = cnt;
		cnt++;
	}
	int x; cin >> x;
	cout << bin_search(a,n,x) << endl;
	for(int i = 0; i < n; i++)
	{
		cout << *(a+i) << " ";
	}
}
