//GCD OR HCF
//BRUTE FORCE
#include<bits/stdc++.h>
using namespace std;
int findGcd(int n1, int n2){
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int gcd=findGcd(n1,n2);
    cout<<gcd;
    return 0;
}

//T.C:O(min(n1,n2))
//S.C:O(1)


//BETTER APPROACH:
#include<bits/stdc++.h>
using namespace std;
int findGcd(int n1, int n2){
    for(int i=min(n1,n2);i>0;i--){
        if(n1%i==0 && n2%i==0){
           return i;
        }
    }
    return 1;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int gcd = findGcd(n1,n2);
    cout<<gcd;
    return 0;
}

//T.C:O(n1,n2)
//S.C:O(1)


                             //EUCLIDEAN ALGORITHM
//OPTIMAL APPROACH:
#include<bits/stdc++.h>
using namespace std;
int findGcd(int n1, int n2){
   while(n1>0 && n2>0){
     if(n1>n2) {
        n1=n1%n2;
     }else{
        n2=n2%n1;
     }
   }
   if(n1==0){
    return n2;
   }
   return n1;
}
int main(){
   int n1,n2;
   cin>>n1>>n2;
   int gcd=findGcd(n1,n2);
   cout<<gcd;

    return 0;
}

//T.C:O(min(n1,n2))
//S.C:O(1)
