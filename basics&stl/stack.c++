#include <bits/stdc++.h>
#include <array>
using namespace std;

 // Stack, Queue & Priority_Queue

int main(){
   // #ifdef ONLINEJUDGE
 // #endif
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output

    //    stack<string> s;
    //    s.push("Siddhartha");
    //    s.push("Goyal");
    //    s.push("Royal");
    //    cout<<"The top element is: "<<s.top()<<endl;
    //    s.pop();
    //    cout<<"The top element is: "<<s.top()<<endl;
    //    cout<<"The size of stack is: "<<s.size()<<endl;
    //    cout<<"Empty or not? "<<s.empty()<<endl;
    
    //Queue
//        queue<string> q;
//        q.push("Siddhartha");
//        q.push("Goyal");
//        q.push("Royal");
//        cout<<"Size before "<<q.size()<<endl;
//        cout<<"First element: "<<q.front()<<endl;
//        q.pop();
//        cout<<"First element: "<<q.front()<<endl;
//        cout<<"Size after "<<q.size()<<endl;

        priority_queue<int> maxi;//by default max heap
        //min heap

        priority_queue<int,vector<int>, greater<int> > mini;

        maxi.push(1);
        maxi.push(2);
        maxi.push(3);
        maxi.push(0);
        int n = maxi.size();
        for(int i=0;i<n;i++){
            cout<<maxi.top()<<" ";
            maxi.pop();
        }cout<<endl;

        mini.push(5);
        mini.push(1);
        mini.push(0);
        mini.push(4);
        mini.push(3);

        int m = mini.size();
        for(int i=0;i<m;i++){
            cout<<mini.top()<<" ";
            mini.pop();
        }cout<<endl;

        cout<<"khali hai kya bhai?? "<<mini.empty()<<endl;
}