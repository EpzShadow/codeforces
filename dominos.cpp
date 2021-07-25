
#include "bits/stdc++.h"
using namespace std;
void solve(){
    int n, m, k;
    cin >> n >> m >>k;
    if(n%2 == 0 && m % 2 == 0){
        if(k%2 == 0)
            cout << "YES";
        else   
            cout << "NO";
    }
    else if(n%2 == 0 && m % 2 == 1){
        if(k%2 == 0 && k <= n*(m-1)/2)
            cout << "YES";
        else
            cout << "NO";
    }
    else if(n % 2 == 1 && m % 2 == 0){
        if(k >= m/2 && ((k - m/2) % 2) == 0)//after we remove one layer, its basically even * even grid
            cout << "YES";
        else  
            cout << "NO";
    }   

    cout << endl;
    return;
}
int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
    solve();
    }
}