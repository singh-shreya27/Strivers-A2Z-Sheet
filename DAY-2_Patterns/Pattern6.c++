//Pattern 6
//1 2 3 4 5
//1 2 3 4 
//1 2 3 
//1 2 
//1 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=n;col>row;col--){
            cout<<n+1-col;
        }
        cout<<"\n";
    }
    return 0;
}
