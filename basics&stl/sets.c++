#include <bits/stdc++.h>
#include <array>
using namespace std;

 // Set

int main(){
   // #ifdef ONLINEJUDGE
 // #endif
        freopen("input.txt","r",stdin); //can need to change file . this one for taking input
        freopen("output.txt","w",stdout); // this one for output

        set<int> s;
        s.insert(5);
        s.insert(5);
        s.insert(5);
        s.insert(5);
        s.insert(1);
        s.insert(6);
        s.insert(0);
        for(auto i:s)
        {
            cout<<i<<" ";
        }cout<<endl;

        // set<int>::iterator it = s.begin();
        // it++;
        // s.erase(it);
        // for(auto i:s)
        // {
        //     cout<<i<<" ";
        // }cout<<endl;
        // batata hai ki yeh element hai ya nhi!
        cout<< "5 is present or not? " <<s.count(-5)<<endl;

        set<int>::iterator itr = s.find(5);
        cout<<"Value present at itr-> "<< *itr<<endl;

        for(auto it=itr;it!=s.end();it++){
            cout<<*it<<" ";
        }cout<<endl;


}