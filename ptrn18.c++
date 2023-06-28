#include <iostream>
using namespace std;

// Input: 5

// Output:
// E
// E D
// E D C
// E D C B
// E D C B A

void printTriangle(int n) {
    // code here
    for(int i=0;i<n;i++){
        int k=65+n-1;
        for(int j=0;j<=i;j++){
            cout<<static_cast<char>(k)<<" ";
            k--;
        }
        cout<<endl;
    }
}