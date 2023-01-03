#include <bits/stdc++.h>
using namespace std;

int power(int a, int b){
    int ans=1;

    for(int i=1;i<=b;i++){
        ans = ans*a;
    }
    return ans;
}

int main(){
   // #ifdef ONLINEJUDGE
 // #endif
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
    
        int a,b;
        cin>>a>>b;
        int anss = power(a,b);
        cout<<anss;
        return 0;
    }