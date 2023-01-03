#include <bits/stdc++.h>
using namespace std;

int main(){
   // #ifdef ONLINEJUDGE
 // #endif
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
    int n;
    cin>>n;
    int i=1;
    int count=1;
    
    while(i<=n){
        int j=1;
        while(j<=i){
            
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }

}    