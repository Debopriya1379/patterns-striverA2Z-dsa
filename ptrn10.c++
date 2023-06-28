#include <iostream>
using namespace std;

// Input: 5

// Output:
// * 
// * * 
// * * * 
// * * * * 
// * * * * *
// * * * *
// * * *
// * *
// *

void printTriangle(int n) {
    // code here
    for(int i=1;i<(2*n);i++){
        if(i<=n){
            for(int j=0;j<i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }else {
            for(int j=(2*n)-i;j>0;j--){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
}