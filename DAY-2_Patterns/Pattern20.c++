//Pattern 20.
//  *        *
//  **      **
//  ***    ***
//  ****  ****
//  **********
//  ****  ****
//  ***    ***
//  **      **
//  *        *

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int spaces=2*n-2;
    for(int row=1;row<=(2*n-1);row++){
        int stars=row;
        if(row>n) stars=2*n-row;
        for(int col=1;col<=stars;col++){
            cout<<"*";
        }
        for(int col=1;col<=spaces;col++){
            cout<<" ";
        }
          for(int col=1;col<=stars;col++){
            cout<<"*";
        }
        cout<<"\n";
        if(row<n) spaces-=2;
        else spaces+=2;

    }

    return 0;
}
