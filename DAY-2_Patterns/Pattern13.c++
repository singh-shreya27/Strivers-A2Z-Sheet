//Pattern13
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
    return 0;
}
