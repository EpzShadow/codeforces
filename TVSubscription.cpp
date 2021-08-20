#include "bits/stdc++.h"
#include <cstring>
#define int long long
#define fastio cin.sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
const int MM = 105;
int freq[105], arr[105];
void solve(){
    int n,k,d,uniques = 0, ans = 1e9;
    cin >> n >> k >>d;
    memset(arr, 0, sizeof(arr));
    memset(freq, 0, sizeof(freq));
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    for(int i = 0; i < d; i ++){
        freq[arr[i]]++;
        if(freq[arr[i]] == 1)
        uniques++;
    }
    ans = min(ans, uniques);
    // cout << uniques;
    for(int i = 1, j = d; j < n; j++, i++){
            uniques = 0;
            memset(freq, 0, sizeof(freq));
            // cout << uniques << endl;
            for(int k = i; k <=j; k++){
                freq[arr[k]]++;
                if(freq[arr[k]] == 1)
                uniques++;
            }
            // cout << uniques;
            ans = min(ans, uniques);
    }
    cout << ans << endl;
    
    //iterate through all the subarrays and count the number of uniques, then take the minium of all of that]
 