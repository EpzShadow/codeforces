#include "bits/stdc++.h"
#include <cstring>
#define int long long
#define fastio              \
    cin.sync_with_stdio(0); \
    cin.tie(0);             \
    cout.tie(0)
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n), ans;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    arr.push_back(1e9);
    arr.push_back(0);
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() && m > 0; i++) {
        int a = arr[i] + 1, b = arr[i + 1];
        for (int j = a; j < b; j++) {
            if (m - j >= 0) {
                m -= j;
                ans.push_back(j);
            }
            else
            goto end;
        }
    }
    end:
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';
}
signed main()
{
    fastio;
    solve();
}