#include <iostream>
using namespace std;

// Input: 5

// Output:
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

void printSquare(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "* ";
        }
        cout<<endl;
    }
}