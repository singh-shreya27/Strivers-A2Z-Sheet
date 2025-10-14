//Pattern 7
// 012345678 ->col
//0    *
//1   ***
//2  *****
//3 *******
//4********* 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //5
    cin>>n;
    for(int row=0;row<n;row++){
        //print front spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        //print stars
        for(int col=0;col<2*row+1;col++){
            cout<<"*";
        }
        //print back spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }  
    cout<<"\n";
    }  
    
    return 0;
}
