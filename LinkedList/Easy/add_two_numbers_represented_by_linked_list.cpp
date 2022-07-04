// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1#
// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        stack<int> a, b;
        while(first){
            a.push(first->data);
            first = first->next;
        }
        
        while(second){
            b.push(second->data);
            second = second->next;
        }
        
        Node* curr = nullptr, *prev = nullptr;
        int carry = 0;
        while(a.size() > 0 || b.size() > 0){
            int sum = 0;
            if(a.size() > 0){
                sum += a.top();
                // cout << "a->" << a.top() << endl;
                a.pop();
            }
            
            if(b.size() > 0){
                sum += b.top();
                // cout << "b->" << b.top() << endl;
                b.pop();
            }
            
            sum += carry;
            // cout << sum << ' ' << carry << endl;
            carry = sum / 10;
            sum %= 10;
            
            Node* newNode = new Node(sum);
            prev = curr;
            curr = newNode;
            curr->next = prev;
        }
        
        if(carry > 0){
            Node* newNode = new Node(carry);
            prev = curr;
            curr = newNode;
            curr->next = prev;
        }
        
        return curr;
    }
    
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends