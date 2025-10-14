//Pattern 8
// 012345678
//0*********
//1 *******
//2  *****
//3   ***
//4    *

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        //front spaces
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        //*
        for(int col=0;col<2*n-2*row-1;col++){
            cout<<"*";
        }
        //end spaces
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
