//Pattern 18
//E
//D E
//C D E
//B C D E
//A B C D E

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(char ch=('A'+n-1)-row;ch<=('A'+n-1);ch++){
         cout<<ch<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
