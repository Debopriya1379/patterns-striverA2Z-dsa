#include <iostream>
using namespace std;

// Input: 5

// Output:
// ABCDE
// ABCD
// ABC
// AB
// A

void printTriangle(int n) {
    // code here
    for(int i=0;i<n;i++){
        int k=65;
        for(int j=0;j<n-i;j++){
            cout<<static_cast<char>(k);
            k++;
        }
        cout<<endl;
    }
}