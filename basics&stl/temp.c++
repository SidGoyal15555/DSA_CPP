#include <bits/stdc++.h>
#include <array>
using namespace std;
int reverse(int n){
        int digit =0;
        int temp = n;
        int sum =0;
        while(temp!=0){
            digit=temp%10;
            sum=sum*10+digit;
            temp=temp/10;
        }
        return sum;
    }
    
int main(){
   // #ifdef ONLINEJUDGE
 // #endif
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
    cout<<reverse(31)<<endl;

}