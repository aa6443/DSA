#include <bits/stdc++.h>
using namespace std;
int recursion(int ind,vector<int>& nums){
    //base case
    if(ind == 0){//0 means we skipped 1st index 
        return nums[ind];
    }
    //if out of bound 
    if(ind <0) return 0;

    int pick = nums[ind] + recursion(ind-2,nums);
    int notPick = 0 + recursion(ind-1,nums);
    return max(pick,notPick);
}
int memoisation(int ind,vector<int>& nums,vector<int> &dp){
    //base case 
    if(ind == 0) return nums[ind];
    if(ind<0) return 0;
    if(dp[ind] != -1) return dp[ind];

    int take = nums[ind] + memoisation(ind-2,nums,dp);
    int notTake = 0 + memoisation(ind-1,nums,dp);
    return dp[ind] = max(take,notTake);
}
int tabulation(int ind,vector<int>& nums,vector<int> &dp){ //bottom up apprroach
    int n = nums.size();
    dp[0] = nums[0];
    
    for(int i=1;i<n;i++){
        int take = nums[i] ;
        if(i>1) take += dp[i-2];
        int notTake = 0 + dp[i-1];
        dp[i] = max(take,notTake);
    }
    return dp[n-1];
}
int optimisation(vector<int>& nums){
    int n = nums.size();
    int prev = nums[0];
    int prev2 = 0;
    for(int i=1;i<n;i++){
        int take = nums[i];
        if(i>1) take += prev2;
        int notTake = 0 + prev;
        //changing values on moving forward 
        int curi = max(take,notTake);
        prev2 = prev;
        prev = curi;
    }
    return prev;
}
int main(){
    vector<int> nums = {2,7,9,3,1};
    int n = nums.size();
    int ans = recursion(n-1,nums);
    cout<<ans<<endl;
    vector<int> dp(n,-1);
    int ans1 = memoisation(n-1,nums,dp);
    cout<<ans1<<endl;
    vector<int> dp1(n,-1);
    int ans2 = tabulation(n-1,nums,dp1);
    cout<<ans2<<endl;
    int ans3 = optimisation(nums);
    cout<<ans3<<endl;
    return 0;
}