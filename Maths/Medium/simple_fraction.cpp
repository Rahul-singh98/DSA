// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/a-simple-fraction0921/1#
// Given a fraction. Convert it into a decimal. 
// If the fractional part is repeating, enclose the repeating part in parentheses.
class Solution{
	public:
	string fractionToDecimal(int num, int den) {
	    string ans = "";
	    int divisor = num / den;
	    
	    ans += to_string(divisor);
	    
	    int rem = num % den;
	    if(rem == 0) return ans;
	    
	    ans  += '.';
	    unordered_map<int, int> mp;
	    while(rem)
	    {
	        if(mp.find(rem) != mp.end())
	        {
	            ans.insert(mp[rem], "(");
	            ans += (")");
	            break;
	        }
	        else{
	            mp[rem] = (int)ans.size();
	            int temp = (rem*10)/den;
	            ans += to_string(temp);
	            rem = (rem*10)%den;
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int numerator, denominator;
		cin >> numerator >> denominator;
		Solution ob;
		string ans = ob.fractionToDecimal(numerator, denominator);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends