
//REVERSE A NUMBER :
//Optimal Approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int revNum=0;
    while(n>0){
      int lastDigit=n%10;
      revNum=revNum*10+lastDigit;
      n=n/10;
    }
    cout<<revNum<<"\n";
    return 0;
}
//T.C:O(log10n+1)
//S.C:O(1)
