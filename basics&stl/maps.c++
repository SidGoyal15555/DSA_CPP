#include <bits/stdc++.h>
#include <array>
using namespace std;

 // Map & unordered_map

int main(){
   // #ifdef ONLINEJUDGE
 // #endif
        freopen("input.txt","r",stdin); //can need to change file . this one for taking input
        freopen("output.txt","w",stdout); // this one for output
        map<int,string> m;
        //m.insert( {5,"kaju"});
        
        m[1]="Siddhartha";
        m[13]="Royal";
        m[2]="Goyal";
         m[5]="Royal";
        cout<<"Before erase->"<<endl ;
        for(auto i:m){
            cout<<i.first<< " "<<i.second<<endl;
        }cout<<endl;

        cout<<"Finding 13->"<<m.count(-13)<<endl;

        //m.erase(13);
        cout<<"After erase->"<<endl ;
        for(auto i:m){
            cout<<i.first<< " "<<i.second<<endl;
        }cout<<endl;

        auto it = m.find(2);
        for(auto i =it;i!=m.end();i++){
            cout<<(*i).first<<endl;

        }


}