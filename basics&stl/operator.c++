#include <bits/stdc++.h>
using namespace std;

int main(){
   // #ifdef ONLINEJUDGE
 // #endif
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
    int n=10;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
       int sum = a+b;
       cout<<sum<<" ";
       a=b;
       b=sum;
    }
    
    
}