#include <bits/stdc++.h>
using namespace std;

int recursive(int ind,vector<int>& height){
    //base case 
    if(ind == 0) return 0;

    int left = recursive(ind-1,height) + abs(height[ind] - height[ind-1]);
    int right = INT_MAX;
    //if index is greater than 1 
    if(ind>1){
        right = recursive(ind-2,height)+abs(height[ind] - height[ind-2]);
    }
    return min(left,right);
}
int memoised(int ind,vector<int>& height,vector<int>& dp){
    //base case 
    if(ind == 0) return 0;
    //check dp 
    if(dp[ind] != -1) return dp[ind];
    int left = memoised(ind-1,height,dp)+ abs(height[ind]-height[ind-1]);
    int right = INT_MAX;
    if(ind > 1){
        right = memoised(ind-2,height,dp) + abs(height[ind] -  height[ind-2]);
    }
    return min(left,right);

}
int tabulation(int n,vector<int> &height){
    vector<int> dp(n,0);
    dp[0] = 0;
    for(int i=1;i<n;i++){
        int fs = dp[i-1] + abs(height[i] - height[i-1]);
        int ss = INT_MAX;
        if(i>1){
            ss = dp[i-2] + abs(height[i] - height[i-2]);
        }
        dp[i] = min(fs,ss);
    }
    return dp[n-1];
}
/* 
    for every relation having one as n-1 and n-2 will have optimised solution
    that is for sure 
*/
int optimised(int n,vector<int>& height){
    int prev = 0;
    int prev2 = 0;
    for(int i=1;i<n;i++){
        int fs = prev + abs(height[i] - height[i-1]);
        int ss = INT_MAX;
        if(i>1){
            ss = prev2 + abs(height[i] - height[i-2]);
        }
        int curi = min(fs,ss);
        prev2 = prev;
        prev = curi;
    }
    return prev;
}
int main(){
    vector<int> height = {10,20,30,10};
    int n = height.size();
    cout<<"The recursive ans is "<<recursive(n-1,height)<<endl;
    vector<int> dp(n+1,-1);
    cout<<"The memoised ans is "<<memoised(n-1,height,dp)<<endl;
    cout<<"The tabulation ans is "<<tabulation(n,height)<<endl;
    cout<<"The optimied ans is "<<optimised(n,height)<<endl;

    return 0;
}