#include <bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest){
    
    cout<<"this is source"<<src<<"This is destination"<<dest<<endl;

    if(src==dest){
        cout<< "pohoch gya "<<endl;
        return;
    }
    //processing
    
    src++;
    
    //recursive call
    reachHome(src,dest);
}

int main(){

    freopen("input.txt","r",stdin); //can need to change file . this one for taking input
    freopen("output.txt","w",stdout); // this one for output

    int dest =10;
    int src  =1;

    reachHome(src,dest);
    


    return 0;
}