#include<iostream>
using namespace std;
// 1
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// 2
// * 
// * * 
// * * * 
// * * * * 
// * * * * *
// 3
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5
// 4
// 1
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5
// 5
// * * * * *
// * * * * 
// * * * 
// * *  
// * 
// 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3 
// 1 2  
// 1 
// 7
//     *
//    ***  
//   *****
//  *******
// *********
// 8
// *********
//  *******
//   *****
//    ***
//     *
// 9
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
// int n = 5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<=i*2;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<=(n-i-1)*2;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// 10
// Input: 5
// * 
// * * 
// * * * 
// * * * * 
// * * * * *
// * * * *
// * * *
// * *
// *
// int n=5;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// 11
// 1 
// 0 1 
// 1 0 1
// 0 1 0 1 
// 1 0 1 0 1
// int n=5;
//     int k;
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             k=1;
//         }else{
//             k=0;
//         }
//         for(int j=0;j<=i;j++){
//             cout<<k<<" ";
//             k=!k;
//         }
//         cout<<endl;
//     }
// 12
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1
// int n=5;
// for(int i=0;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//     }
//     for(int j=0;j<4*(n-i);j++){
//         cout<<" ";
//     }
//     int k=i;
//     while(k>0){
//         cout<<k<<" ";
//         k--;
//     }
//     cout<<endl;
// }
// 13
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15
// int n=5;
// int k=1;
// for(int i=0;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<k<<" ";
//         k++;
//     }
//     cout<<endl;
// }
// 14
// A
// AB
// ABC
// ABCD
// ABCDE
// int n=5;
// for(int i=0;i<n;i++){
//     int k=65;
//     for(int j=0;j<=i;j++){
//         cout<<static_cast<char>(k);
//         k++;
//     }
//     cout<<endl;
// }
// 15
// ABCDE
// ABCD
// ABC
// AB
// A
// int n=5;
// for(int i=0;i<n;i++){
//     int k=65;
//     for(int j=n-i;j>0;j--){
//         cout<<static_cast<char>(k);
//         k++;
//     }
//     cout<<endl;
// }
// 16
// A
// BB
// CCC
// DDDD
// EEEEE
// int n=5;
// int k=65;
// for(int i=0;i<n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<static_cast<char>(k);
//     }
//     cout<<endl;
//     k++;
// }
// 17
//    A
//   ABA
//  ABCBA
// ABCDCBA
// int n=5;
// for(int i=0;i<n;i++){
//     for(int j=0;j<=n-i-1;j++){
//         cout<<" ";
//     }
//     int k=65;
//     for(int j=0;j<=i;j++){
//         cout<<static_cast<char>(k);
//         k++;
//     }
//     k--;
//     for(int j=0;j<i;j++){
//         k--;
//         cout<<static_cast<char>(k);
//     }
//     cout<<endl;
// }
// 18
// E
// E D
// E D C
// E D C B
// E D C B A
// int n=5;
// for(int i=0;i<n;i++){
//     int k=65;
//     for(int j=0;j<=i;j++){
//         cout<<static_cast<char>(k+n-1)<<" ";
//         k--;
//     }
//     cout<<endl;
// }
// 19
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// int n=5;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<"*";
//     }
//     for(int j=0;j<i;j++){
//         cout<<"  ";
//     }
//     for(int j=0;j<n-i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<"*";
//     }
//     for(int j=0;j<n-i-1;j++){
//         cout<<"  ";
//     }
//     for(int j=0;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// 20
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// 21
// ****
// *  *
// *  *
// ****
// 22
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4


int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}