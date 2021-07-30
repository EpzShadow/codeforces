#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[3], ans = 0;
	for (int i = 0; i < 3; i++)
		cin >> a[i];
	int M = max(a[0], max(a[1], a[2]));
	for (int i = 0; i < 3; i++) {
		if (a[M] == a[i])
			continue;
		else if (M - 1 - a[i] > 0)
			ans += M - 1 - a[i];
	}
	cout << ans;
}
