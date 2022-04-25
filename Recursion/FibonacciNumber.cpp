#include<bits/stdc++.h>
using namespace std;

// Using Recursion
class Solution {
public:
    int fib(int n) {
       if(n<2) return n;
       return fib(n-1) + fib(n-2);
    }
};

// Using memoization
// class Solution {
// public:
//     unordered_map<int , int> cache;
//     int fib(int n) {
//        if(n<2) return n;
//        if(cache[n]!=0) return cache[n];
//        int result =  fib(n-1) + fib(n-2);
//        cache[n] = result;
//        return result;
//     }
// };