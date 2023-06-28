#include <iostream>
using namespace std;

// Input: 5

// Output:
// 1 
// 0 1 
// 1 0 1
// 0 1 0 1 
// 1 0 1 0 1

void printTriangle(int n) {
    for(int i=0;i<n;i++){
        int k=0;
        if(i%2==0){
            k=1;
        }
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k=!k;
        }
        cout<<endl;
    }
}