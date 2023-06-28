#include <iostream>
using namespace std;

// Input: 5
// 
// Output:
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5

void printTriangle(int n) {
    // code here
    for(int i=0;i<n;i++){
        int k=1;
        for(int j=0;j<=i;j++){
            cout << k <<" ";
            k++;
        }
        cout<<endl;
    }
}