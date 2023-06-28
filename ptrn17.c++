#include <iostream>
using namespace std;

// Input: 4
// Output:
//    A
//   ABA
//  ABCBA
// ABCDCBA

void printTriangle(int n) {
    // code here
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int k=65;
        for(int j=0;j<=i;j++){
            cout<<static_cast<char>(k);
            k++;
        }
        k--;
        for(int j=0;j<i;j++){
            k--;
            cout<<static_cast<char>(k);
        }
        cout<<endl;
    }
}