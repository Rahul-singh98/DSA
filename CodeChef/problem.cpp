#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string parentA , parentB; cin >> parentA >> parentB;
        parentA+= parentB;
        map<char , int> parentName , childName;
        int n;cin >> n;
        for(int i=0;i<n;i++){
            string child; cin >> child;
            for(const char c: child) childName[c]++;
        }

        for(const char c: parentA) parentName[c]++;

        bool flag = false;
        for(auto itr: childName){
            if(flag) break;
            if(itr.second > parentName[itr.first]){
                flag = false;
                break;
            }
            flag = true;
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}