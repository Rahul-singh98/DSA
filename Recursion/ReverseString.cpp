// https://leetcode.com/explore/featured/card/recursion-i/250/principle-of-recursion/1440/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        if (s.size()==0) return;
        char temp = s[0];
        s.erase(s.begin());
        reverseString(s);
        s.push_back(temp);
    }
};

int main(){
    vector<char> s ={'H' , 'a' , 'n' , 'n' , 'a' , 'h'};
    Solution obj;
    obj.reverseString(s);
    for(auto i:s) cout << i << ' ';
    cout << '\n';
    return 0;
}