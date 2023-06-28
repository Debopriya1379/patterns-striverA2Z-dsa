#include <iostream>
using namespace std;

// Input: 5

// Output:
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1

void printTriangle(int n) {
    // code here
    for(int i=1;i<=n;i++){
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        int k=1;
        while(k<=4*(n-i)){
            cout<<" ";
            k++;
        }
        int l=i;
        while(l>0){
            cout<<l<<" ";
            l--;
        }
        cout<<endl;
    }
}