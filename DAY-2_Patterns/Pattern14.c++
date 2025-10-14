//Pattern 14
//A
//A B
//A B C
//A B C D
//A B C D E
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=0;col<row;col++){
           cout<<char('A'+col);
           
        }
        cout<<"\n";
    }
    return 0;
}
