#include <iostream>
using namespace std;

// Input: 5

// Output:
// * 
// * * 
// * * * 
// * * * * 
// * * * * *

void printTriangle(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}