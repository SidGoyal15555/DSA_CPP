#include <bits/stdc++.h> 

using namespace std;

int countDistinctWays(int nstairs) {
    //  Write your code here.
    if(nstairs<0){
        return 0;
    }
    if(nstairs==0){
        return 1;
    }
    
    int ans = countDistinctWays(nstairs - 1) + countDistinctWays(nstairs-2);
    return ans;
}

int main(){

    freopen("input.txt","r",stdin); //can need to change file . this one for taking input
    freopen("output.txt","w",stdout); // this one for output

    int n;
    cin>>n;
    int ans = countDistinctWays(n);
    cout<<ans<<endl;
}