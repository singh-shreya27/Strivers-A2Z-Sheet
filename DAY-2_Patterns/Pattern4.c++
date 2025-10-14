//Pattern 4.
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            cout<<row+1;
        }
        cout<<"\n";
    }
    return 0;
}
