//Pattern 10
// *
// **
// ***
// **** 
// ***
// **
// *

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     for(int row=1;row<=2*n-1;row++){
        int stars=row;
        if(row>n) stars= 2*n-row;
        for(int col=1;col<=stars;col++){
            cout<<"*";
        }
        cout<<"\n";
     }
    return 0;
}
