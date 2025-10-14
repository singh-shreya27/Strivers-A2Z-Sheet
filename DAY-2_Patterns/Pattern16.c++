//Pattern 16
//A
//BB
//CCC
//DDDD
//EEEEE

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
           cout<<char('A'+row);         
        }
        cout<<"\n";
    }
    return 0;
}
