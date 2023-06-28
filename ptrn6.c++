#include <iostream>
using namespace std;

// Input: 5

// Output:
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3 
// 1 2  
// 1 

void printTriangle(int n) {
    // code here
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<< j << " ";
        }
        cout<<endl;
    }
}