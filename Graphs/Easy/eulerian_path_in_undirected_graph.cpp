// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
// https://practice.geeksforgeeks.org/problems/eulerian-path-in-an-undirected-graph5052/1/#
// Given an adjacency matrix representation of an unweighted undirected graph named graph, 
// which has N vertices. You have to find out if there is an eulerian path present in the
// graph or not.
// Note: The graph consists of a single component
class Solution{
public:
    int eulerPath(int N, vector<vector<int>> graph){
        /* Since given graph has only 1 component that means 
        already connected, so only check if odd degree is 0 or 2*/
        int oddDegrees = 0;
        for(int i = 0; i < N && oddDegrees < 3; i++){
            int count = 0;
            for(int j = 0; j < N; j++)
                if(graph[i][j]) count++;
            if(count & 1) oddDegrees++;
        }
        return oddDegrees < 3;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j = 0;j < N;j++)
                cin>>graph[i][j];
        
        Solution ob;
        cout<<ob.eulerPath(N, graph)<<"\n";
    }
    return 0;
}  // } Driver Code Ends