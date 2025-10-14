
//Pattern 15
//ABCDE
//ABCD
//ABC
//AB
//A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=n;col>=row;col--){
           cout<<char('A'+n-col);
           
        }
        cout<<"\n";
    }
    return 0;
}
