#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1,1);
        
        for(int i=2;i<=rowIndex;i++){
            for(int j=1;j<i;j++){
                ans[i-j] += ans[i-j-1];
            }
        }
        
        return ans;
    }
};