#include <bits/stdc++.h>
using namespace std;
int recursive(int ind,vector<int>& height,int k){
    //base case 
    if(ind == 0) return 0;
    int minSteps = INT_MAX;
    for(int j=1;j<=k;j++){
        if(ind-j >= 0){
            int jump = recursive(ind-j,height,k)+abs(height[ind] - height[ind-j]);
            minSteps = min(minSteps,jump);
        }
    }
    return minSteps;
}
/*
    TC - O(N)*k
    SC - O(N)+O(N)
*/
int memoisation(int ind,vector<int>& height,int k,vector<int>& dp){
    //base case 
    if(ind == 0) return 0;
    if(dp[ind] != -1) return dp[ind];
    int minSteps = INT_MAX;

    for(int j=1;j<=k;j++){
        if(ind - j >= 0){
            int jump = memoisation(ind-j,height,k,dp) + abs(height[ind] - height[ind - j]);
            minSteps = min(minSteps,jump);
        }
    }
    return dp[ind] = minSteps;
}
/*
    TC-O(N)*k
    SC - O(N)
*/
int tabulation(int n, vector<int>& height, vector<int>& dp, int k){
    
    dp[0]=0;
    for(int i=1;i<n;i++){
        int mmSteps = INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j >= 0){
                int jump = dp[i-j] + abs(height[i] - height[i-j]);
                mmSteps = min(jump,mmSteps);
            }
        }
        dp[i] = mmSteps;
    }
    return dp[n];
}
int main(){
    vector<int> height = {10,20,30,10};
    int n = height.size();
    int k = 2;
    int ans = recursive(n-1,height,k);
    cout<<"The answer is : "<<ans<<endl;
    vector<int> dp(n+1,-1);
    int ans2 = memoisation(n-1,height,k,dp);
    cout<<"The answer is : "<<ans2<<endl;

     vector<int> height1{30, 10, 60, 10, 60, 50};
    int n = height1.size();
    int k = 2;
    vector<int> dp1(n, -1); // Initialize a memoization array for the main function
    cout << tabulation(n, height1, dp1, k) << endl;
    return 0;
}