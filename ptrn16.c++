#include <iostream>
using namespace std;

// Input: 5

// Output:
// A
// BB
// CCC
// DDDD
// EEEEE

void printTriangle(int n) {
    // code here
    int k=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<static_cast<char>(k);
        }
        k++;
        cout<<endl;
    }
}