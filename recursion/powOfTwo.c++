#include <bits/stdc++.h>
using namespace std;

int power(int n){

    if(n==0){
        return 1;
    }
    //recursive relation
    return 2*power(n-1);
    
}

int main(){
   // #ifdef ONLINEJUDGE
 // #endif
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output

        int n;
        cin>>n;
        int ans  = power(n);
        cout<<ans<<endl;


        return 0;



}