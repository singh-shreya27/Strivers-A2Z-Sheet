//Pattern 12
//1      1
//12    21
//123  321
//12344321
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<col;
        }
        for(int col=0;col<2*n-2*row;col++){
            cout<<" ";
        }
        for(int col=row;col>=1;col--){
            cout<<col;
        }
        cout<<"\n";
    }
    return 0;
}
