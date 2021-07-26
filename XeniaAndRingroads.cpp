#include "bits/stdc++.h"
using namespace std;
const int MM = 1e5+2;
long long arr[MM], ans;
int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i ++){
        cin >> arr[i];
    }
    for(int i = 1; i < m; i ++){
        if(arr[i] >= arr[i-1]){
            ans += arr[i]-arr[i-1];
        }
        else
            ans += arr[i]-arr[i-1] + n;
    }
    cout << ans + arr[0] -1 << endl;
}
