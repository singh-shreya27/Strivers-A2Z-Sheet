//Pattern 2:
//*
//** 
//***
//****
//*****

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;  //number of rows->height of triangle
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            cout<<"*";
        }
        cout<<"\n";

    }

    return 0;
}
