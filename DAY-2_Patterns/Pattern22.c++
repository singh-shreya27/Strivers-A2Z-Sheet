//Pattern 22.
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<2*n-1;row++){
        for(int col=0;col<2*n-1;col++){
            int top=row;
            int bottom=col;
            int right=2*n-2-col;
            int left=2*n-2-row;
            cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
        }
            cout<<"\n";
    }
    return 0;
}
