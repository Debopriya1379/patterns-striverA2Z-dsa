#include <iostream>
using namespace std;

// Input: 5

// Output:
// A
// AB
// ABC
// ABCD
// ABCDE

void printTriangle(int n) {
    // code here
    for(int i=0;i<n;i++){
        int k=65;
        for(int j=0;j<=i;j++){
            cout<<static_cast<char>(k);
            k++;
        }
        cout<<endl;
    }
}