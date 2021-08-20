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
    int ans = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size();i++){
        int d = s[i] - '0';
        if(d%4==0)ans++;
        if(i > 0){
            int b = s[i-1] - '0';
            if((10*b + d)%4 == 0)ans += i;
        }
    }
    cout << ans;
}
signed main()
{
    fastio;
    solve();
}