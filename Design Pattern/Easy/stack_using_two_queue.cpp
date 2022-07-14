// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */
// https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1#
// Implement a Stack using two queues q1 and q2.
//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        if(q1.empty()) q1.push(x);
        else
        {
            while(!q1.empty())
            {
                int top = q1.front();
                q1.pop();
                q2.push(top);
            }
            
            q1.push(x);
            while(!q2.empty())
            {
                int top = q2.front();
                q2.pop();
                q1.push(top);
            }
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        if(q1.empty()) return -1;
        int val = q1.front();
        q1.pop();
        return val;
}
