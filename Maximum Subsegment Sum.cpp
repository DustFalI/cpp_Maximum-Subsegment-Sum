#include <bits/stdc++.h>
using namespace std;
int n, arr[200005], ans = -10000;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		if(arr[i-1] > 0)
		{
			arr[i] += arr[i-1];
		}
		ans = max(ans, arr[i]);
	}
	cout << ans;
	return 0;
}
