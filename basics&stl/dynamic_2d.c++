#include <bits/stdc++.h>
using namespace std;

int main(){
   // #ifdef ONLINEJUDGE
 // #endif
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
       
       int n;
       cin>>n;
       //creating 2d array
       int** arr = new int*[n];
        for(int i=0;i<n;i++){
            arr[i]= new int[n];
        }
        //taking input
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        //printing it out
        cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }