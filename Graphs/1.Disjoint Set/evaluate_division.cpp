// tags:- Disjoint Set
// https://leetcode.com/explore/learn/card/graph/618/disjoint-set/3914/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double>ans;
        unordered_map<string , unordered_map<string , double>> graph;
        
        for(int i=0;i<equations.size();i++){
            const string& A = equations[i][0];
            const string& B = equations[i][1];
            
            graph[A][B] = values[i];
            graph[B][A] = 1/ values[i];
        }
        
        for(const auto&q : queries){
            const string& C = q[0];
            const string& D = q[1];
            
            if(!graph.count(C) || !graph.count(D)) {ans.pb(-1) ; continue;}
            
            unordered_set<string> seen;
            ans.pb(divide(graph ,C , D , seen));
        }
        
        return ans;
    }
    
private:
    double divide(unordered_map<string , unordered_map<string , double >>& graph ,const string& A ,const string& C , unordered_set<string>& seen){
        if(A==C) return 1;
        seen.insert(A);
        
        for(const auto& i:graph[A]){
            string B = i.first;
            double value = i.second;
            if(seen.count(B)) continue;
            const double res = divide(graph , B , C , seen);
            if(res > 0) return res * value;
        }
        
        return -1;
    }
};