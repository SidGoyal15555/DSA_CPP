#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt","r",stdin); //can need to change file . this one for taking input
    freopen("output.txt","w",stdout); // this one for output

    return 0;
}

int solve(vector<int>& cost,int n, vector<int>& dp){
        //base case
        if(n==0){
            return cost[0];
        }
            if(n==1){
                return cost[1];
            }
            
        //step 3
        if(dp[n]!= -1){
            return dp[n];
        }
        
        //Stpe 2
        dp[n] = cost[n] + min(solve(cost,n-2,dp),solve(cost,n-1,dp));
        return dp[n];
    }

    int solve2(vector<int>& cost,int n, vector<int>& dp){
        //base case
        if(n==0){
            return cost[0];
        }
        if(n==1){
            return cost[1];
        }
        int ans = cost[n] + min(solve(cost,n-2,dp),solve(cost,n-1,dp));
        return ans;
    }
    int solve4(vector<int>& cost, int n){
        int prev2= cost[0];
        int prev1 = cost[1];
        
        for(int i=2;i<n;i++){
            int curr = cost[i] + min(prev1,prev2);
            prev2 = prev1;
            prev1 = curr;
            
        }
        return min(prev1,prev2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        //it can be simplified more
        //for solve method 1
        //int ans = min(solve(cost,n-1),solve(cost,n-2));
        //return ans;
        //step 1
        //for solve method 2
        vector<int> dp(n+1,-1);
        int ans = min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return ans;
    
    
    }