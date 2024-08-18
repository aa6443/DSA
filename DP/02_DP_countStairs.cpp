// count all possible ways and add them up 
#include <bits/stdc++.h>
using namespace std;

int memoisation(int n,vector<int>& dp){
    //base case 
    if(n == 0) return 1;
    if(n == 1) return 1;
    if(dp[n] != -1) return dp[n];
    int left = memoisation(n-1,dp);
    int right = memoisation(n-2,dp);
    return dp[n] = left+ right;
    /*
        TC-O(N)
        SC-O(2N)
    */
} 
int tabulation(int n,vector<int>& dp){
    //base case 
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[n] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int optimisation(int n){
    int prev2 = 1;
    int prev1 = 1;
    for(int i=2;i<=n;i++){
        int temp = prev1 + prev2;
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    //step 1 - create a dp array with n+1 size and init with -1
    vector<int> dp(n+1,-1);
    int soln = memoisation(n,dp);
    cout<<"The memoised solution is : "<<soln<<endl;
    int soln1 = memoisation(n,dp);
    cout<<"The tabulation solution is : "<<soln1<<endl;
    int soln2 = memoisation(n,dp);
    cout<<"The optimised solution is : "<<soln2;
    return 0;
}