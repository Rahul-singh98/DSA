// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

// https://practice.geeksforgeeks.org/problems/Queue-using-stack/1#
// Implement a Queue using two stack s1 and s2.
class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        while(!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
        
        input.push(x);
        while(!output.empty())
        {
            input.push(output.top());
            output.pop();
        }
        
    }

    int dequeue() {
        if(input.empty()) return -1;
        int res = input.top();
        input.pop();
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Queue ob;

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            ob.enqueue(a);
        }
        else if(QueryType==2)
        {
            cout<<ob.dequeue()<<" ";

        }
        }
    cout<<endl;
    }
}
  // } Driver Code Ends