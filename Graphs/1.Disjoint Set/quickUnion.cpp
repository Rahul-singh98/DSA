// https://leetcode.com/explore/learn/card/graph/618/disjoint-set/3840/
#include<bits/stdc++.h>
using namespace std;

class UnionFind{
public:
    UnionFind(int sz): root(sz){
        iota(root.begin() , root.end() , 0);
    }

    int find(int x){
        while(root[x]!= x){
            x= root[x];
        }
        return x;
    }

    void union_(int x  , int y ){
        int rootx = find(x);
        int rooty = find(y);
        if(rootx != rooty){
            root[rooty] = rootx;
        }
    }

    bool connected(int x , int y){
        return find(x) == find(y);
    }

private:
    vector<int>root;
};

// Test Case
int main() {
    // for displaying booleans as literal strings, instead of 0 and 1
    cout << boolalpha;
    UnionFind uf(10);
    // 1-2-5-6-7 3-8-9 4
    uf.union_(1, 2);
    uf.union_(2, 5);
    uf.union_(5, 6);
    uf.union_(6, 7);
    uf.union_(3, 8);
    uf.union_(8, 9);
    cout << uf.connected(1, 5) << endl;  // true
    cout << uf.connected(5, 7) << endl;  // true
    cout << uf.connected(4, 9) << endl;  // false
    // 1-2-5-6-7 3-8-9-4
    uf.union_(9, 4);
    cout << uf.connected(4, 9) << endl;  // true

    return 0;
}