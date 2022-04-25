#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


// Recursive Approach
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(!head || !head->next) return head;

//         ListNode* newhead = reverseList(head->next);
//         head->next->next = head;
//         head->next = nullptr;
//         return newhead;        
//     }
// };

// Iterative Approach
class Solution{
public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev = nullptr;

        while(head){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }
};