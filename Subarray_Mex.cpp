#include<bits/stdc++.h>
using namespace std;
#define push_back pb
#define pop_back ppb
#define vi vector<int>
#define mii map<int ,int>
typedef long long int lli;

void solve(int n , int k , int x){
    if(k < x){
        cout << -1 << '\n';
        return ;
    }
    int i=0;
    while(n){
        if(i==k) {
            i=0;
            continue;
        }
        cout << i% x << ' ';
        n--;
        i++;
    }
    cout << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        int n , k , x ;cin>>n>> k >> x;
        solve(n , k , x);
    }
    return 0;
}
