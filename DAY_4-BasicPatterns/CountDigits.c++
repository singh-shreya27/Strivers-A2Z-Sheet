
  //Count digits in a number
//Brute force approach 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;  
    int cnt=0;
    while(n>0){
        cnt++;
        n=n/10;
    }
    cout<<cnt<<"\n";
    return 0;
}

//T.C:O(log10n+1) 
//S.C:O(1)

//OPTIMAL APPROACH:
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<< (int)log10(n)+1; //cast to integer->float to int.
    return 0;
}
//T.C:O(1)
//S.C:O(1)
