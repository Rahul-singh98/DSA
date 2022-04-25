/*
ID: rahulra13
PROG: ride
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
#define ll long long int
int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string group , name ;
    getline(fin , group);
    getline(fin , name);
    ll gs =1 , ns=1 ;
    for(const char i: group)
        gs *= (i-'A')+1;
    for(const char i: name)
        ns *= (i-'A')+1;
    // cout << gs << ' ' << ns << endl;
    if(gs%47 == ns%47) fout << "GO\n";
    else fout << "STAY\n";
    return 0;
}