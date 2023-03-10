#include <bits/stdc++.h> 

int solve(vector<int>& nums, int n){
    // base case
    if(n==0){
        return nums[0];
    }
    if(n<0){
        return 0;
    }
    //include step
    int include = solve(nums,n-2) + nums[n];
    //exclude step
    int exclude = solve(nums,n-1) + 0 ;
    return max(include,exclude);
}
int solveMem(vector<int>& nums, int n, vector<int>& dp){
    if(n==0){
        return nums[0];
    }
    if(n<0){
        return 0;
    }
    if(dp[n] !=-1){
        return dp[n];
    }
    //include step
    int include = solve(nums,n-2) + nums[n];
    //exclude step
    int exclude = solve(nums,n-1) + 0 ;
    dp[n] = max(include,exclude);
    return dp[n];
}
int solveTab(vector<int>& nums){
    int n = nums.size();
    vector<int> dp(n,0);
    dp[0] = nums[0];
    for(int i=1;i<n;i++){
        int include = dp[i-2] + nums[i];
        int exclude = dp[i-1] + 0;
        dp[i] = max(include,exclude);
    }
    return dp[n-1];
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size();
    int ans = solve(nums,n-1);
    vector<int> dp(n,-1);
    return solveMem(nums,n-1,dp);
}