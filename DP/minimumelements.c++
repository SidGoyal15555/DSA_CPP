#include <bits/stdc++.h>
using namespace std;

//code studio problem
int solve(vector<int>& num, int x){
    //base case
    if(x==0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i=0;i<num.size();i++){
        int ans = solve(num, x - num[i]);
        if(ans!=INT_MAX){
            mini = min(mini,1+ans);
        }
    }
    return mini;
}
int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
    int ans = solve(num,x);
    if(ans==INT_MAX){
        return -1;
    }
}
int main(){

    freopen("input.txt","r",stdin); //can need to change file . this one for taking input
    freopen("output.txt","w",stdout); // this one for output

    return 0;
}
// int solve(){
    
// }