#include<bits/stdc++.h>
using namespace std;
#define push_back pb
#define pop_back ppb
#define vi vector<int>
#define mii map<int ,int>
typedef long long int lli;

void solve(int n, int x, string s){
    int ans = 0;
    int ones = 0;
    string zeros = "";
    int _max = n/x;
    for(int i=0;i<x;i++) zeros += '0';
    for(int i=0;i<=n-x;i++){
        string subs= s.substr(i,x);
        if(subs==zeros && subs.size()==x){
            ans++;
            i+=x-1;
            continue;
        }

        int count =0;
        bool flag = true;
        for(const char &c: subs){
            if(count >1) {flag=false;break;}
            if(c=='1') count++;
        }
        if(flag ) ones++;
    }
    
    if(ones && ans < _max) ans +=1;
    cout << ans << '\n';
}

int main(){
    int t;cin >> t;
    while(t--){
        int n , x;cin>>n >> x;
        string s; cin >> s;
        solve(n , x , s);
    }
    return 0;
}
