#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for(int k = 0; k < t; k++) {
        int n, w; cin >> n >> w;
        int prices[n];
        for(int i = 0; i < n; i++) cin >> prices[i];
        sort(prices, prices+n);
        
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(w-prices[i] < 0) break;
            
            ans ++;
            w -= prices[i];
        }
        
        cout << "Case #" << k+1 << ": " <<  ans << endl;
    }
    return 0;
}