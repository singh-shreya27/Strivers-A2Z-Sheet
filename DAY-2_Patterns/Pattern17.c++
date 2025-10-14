//Pattern 17
//    A
//   ABA
//  ABCBA
// ABCDCBA

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=1;col<n-row;col++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*row+1)/2;
        for(int col=1;col<=2*row+1;col++){
            cout<<ch;
            if(col<=breakpoint) ch++;
            else ch--;
        }
        for(int col=1;col<n-row;col++){
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
