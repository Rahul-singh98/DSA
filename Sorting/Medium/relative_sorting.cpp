//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
//User function template in C++
// https://practice.geeksforgeeks.org/problems/relative-sorting4323/1
// Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. Sort the first array A1[ ] 
// such that all the relative positions of the elements in the first array are the same as the 
// elements in the second array A2[ ].
// See example for better understanding.
// Note: If elements are repeated in the second array, consider their first occurance only.
class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> B, int M) 
    {
        unordered_map<int, int> mp;
        for(int i = 0; i < N; i++) mp[A1[i]]++;
        
        vector<int> res;
        for(int i = 0; i < M; i++)
        {
            if(mp.find(B[i]) != mp.end())
            {
                int count = mp[B[i]];
                while(count--) res.push_back(B[i]);
                
                mp.erase(B[i]);
            }
        }
        
        vector<int> temp;
        
        unordered_map<int, int>:: iterator it = mp.begin();
        
        while(it != mp.end())
        {
            while(it->second > 0) 
            {
                temp.push_back(it->first);
                it->second--;
            }
            
            it++;
        }
        
        sort(temp.begin(), temp.end());
        for(int i = 0; i < temp.size(); i++) res.push_back(temp[i]);
        
        return res;
        
        return res;
    } 
};

//{ Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 

// } Driver Code Ends