//Pattern 5
//***** 
//**** 
//*** 
//** 
//*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=n;col>row;col--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
