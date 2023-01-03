#include <bits/stdc++.h>
using namespace std;

int facto(int n){
    int ans; 
    //Base Case && base case mai return sta tement likhna zaruri
    if(n==0){
        return 1;
    }
    int choti = n * facto(n-1);
    //int badi = n*choti;

    return choti;
}

int main(){
   // #ifdef ONLINEJUDGE
 // #endif
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output

        int n;
        cin>>n;
        
        //cout<<"This is the factorial of my number: "<<n<<endl;
        cout<<facto(n)<<endl;
        return 0;


}