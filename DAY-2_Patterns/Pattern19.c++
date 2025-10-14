//Pattern 19
//   12345678910
//0  ********** 
//1  ****  **** 
//2  ***    *** 
//3  **      ** 
//4  *        *
//5  *        *
//6  **      **
//7  ***    ***
//8  ****  ****
//9  ********** 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int inis=0;
    for(int row=0;row<n;row++){
        for(int col=1;col<=n-row;col++){
            cout<<"*";
        }
        for(int col=0;col<inis;col++){
            cout<<" ";
        }
        for(int col=1;col<=n-row;col++){
            cout<<"*";
        }
        inis+=2;
        cout<<"\n";
    }
      inis=2*n-2;
      for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
         for(int col=0;col<inis;col++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        inis-=2;
        cout<<"\n";
      }
    return 0;
}
