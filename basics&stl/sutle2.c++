#include <bits/stdc++.h>
#include <array>
using namespace std;

//List

int main(){
   // #ifdef ONLINEJUDGE
 // #endif
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output

    list<int> l;
    //making a copy of list l into new list namely cp.
    list<int> cp(l);
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of list: "<< l.size()<<endl;


}
