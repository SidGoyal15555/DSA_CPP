#include <bits/stdc++.h> 

using namespace std;
//leetcode permutations question
// link: Permutations - LeetCode
// https://leetcode.com/problems/permutations/submissions/


private:
    void solve(vector<int>& nums,vector<vector<int>>& ans, int index ){
        //base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j = index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1);
            //backtrack
            swap(nums[index],nums[j]);
        }
        
    }    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
int main(){

    freopen("input.txt","r",stdin); //can need to change file . this one for taking input
    freopen("output.txt","w",stdout); // this one for output

}