#include <iostream>
using namespace std;

// Input =7
//       * 
//      * * 
//     * * * 
//    * * * * 
//   * * * * * 
//  * * * * * * 
// * * * * * * * 
// * * * * * * * 
//  * * * * * * 
//   * * * * * 
//    * * * * 
//     * * * 
//      * * 
//       * 

void printDiamond(int n) {
    // code here`
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int k=0;
        while(k<=i){
            cout<<"* ";
            k++;
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        int k=0;
        while(k<n-i){
            cout<<"* ";
            k++;
        }
        cout<<endl;
    }
}