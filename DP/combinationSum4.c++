class Solution {
private:
    int solve(vector<int>& nums, int target,vector<int>& dp){
        //base case
        if(target<0){
            return 0;
        }
        if(target==0){
            return 1;
        }
        if(dp[target] != -1){
            return dp[target];
        }
        //recursion
        int ans =0;
        for(int i=0;i<nums.size();i++){
            ans += solve(nums,target-nums[i],dp); 
        }
        dp[target] = ans;
        return ans;
    }
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1,-1);
        return solve(nums,target,dp);
        
    }
};