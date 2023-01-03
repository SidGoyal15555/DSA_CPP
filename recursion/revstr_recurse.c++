#include <bits/stdc++.h>
using namespace std;

void reverse(string &str, int i,int j){

    cout<<"Call received for "<<str<<endl;

    //base case
    if(i>j){
        return;
    }

    swap(str[i],str[j]);
    i++;
    j--;

    //recursive call
    reverse(str,i,j);
    

}

int main(){

    freopen("input.txt","r",stdin); //can need to change file . this one for taking input
    freopen("output.txt","w",stdout); // this one for output

    string name = "Siddhartha";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;


    return 0;
}