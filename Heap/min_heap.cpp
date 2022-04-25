#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define mp make_pair
#define pb push_back
#define vvi vector<vector<int>>

int main(){
    vector<int> v1 = {20, 30, 40, 25, 15};
      
    // Converting vector into a heap
    // using make_heap()
    make_heap(v1.begin(), v1.end());
    sort_heap(v1.begin(), v1.end());

    // push element in heap 
    push_heap(v1.begin() , v1.end());
      
    // Displaying the maximum element of heap
    // using front()
    cout << "The maximum element of heap is : ";
    for(auto i: v1) cout << i << ' ';
    cout << endl;
    return 0;
}