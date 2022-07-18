//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array0959/1
// Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an 
// element K. The task is to find the index of the given element K in the array A.
//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> vec, int k) {
    int l = 0, r = vec.size()-1;
    while(l <= r)
    {
        int mid = (l + r)/ 2;
        if(vec[mid] == k) return mid;
        else if(vec[mid] < k)
        {
            if(k > vec[r] && vec[r] > vec[mid]) r = mid - 1;
            else l = mid + 1;
        }
        else 
        {
            if(k < vec[l] && vec[l] < vec[mid]) l = mid + 1;
            else r = mid - 1;
        }
    }
    
    return -1;
}