//1.
//***** 
//***** 
//***** 
//***** 
//***** 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //height of pattern->number of rows
    cin>>n;
    //row->horizontal
    for(int row=0;row<n;row++){
         for(int col=0;col<n;col++){
            cout<<"*";
         }
         cout<<"\n";
    }
    return 0;
}
