#include<bits/stdc++.h>
using namespace std;

bool recursive(vector<int>& v, int l, int r, int x) {
    if(l>r) return false;
    int mid = l + (r - l) / 2;
    if(v[mid] == x) return true;
    if(v[mid] > x) return recursive(v, l, mid -1, x);
    return recursive(v, mid + 1, r, x);
}

bool iterative(vector<int>& v, int x) {
    int l = 0, r = v.size()-1;
    while(l<=r) {
        int mid = l + (r - l) / 2;
        if(v[mid] == x) return true;
        else if(v[mid] > x) r = mid - 1;
        else  l = mid + 1;
    }

    return false;
}


int main() {
    vector<int> v = {1,2,3,4,5,5,6};
    for(auto i: v) {
        cout << "Iterative : " << boolalpha << iterative(v, i) << endl;
        cout << "Recursive : " << boolalpha << recursive(v, 0, v.size()-1, i) << endl;
    }
    cout << "Iterative : " << boolalpha << iterative(v, 19) << endl;
    cout << "Recursive : " << boolalpha << recursive(v, 0, v.size()-1, 19) << endl;
}