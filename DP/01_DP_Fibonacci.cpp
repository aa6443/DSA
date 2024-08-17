#include <bits/stdc++.h>
using namespace std;
//top down approach
int f(int n,vector<int> &dp){
    //base case 
    if(n<=1) return n;
    //s-2 check if value present in dp array 
    if(dp[n] != -1) return dp[n];
    //recursive relation 
    return dp[n] = f(n-1,dp)+f(n-2,dp);
}
//bottom up approach
int tabulation(int n,vector<int> &dp){
    //directly store value of n=0 and 1 
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<n;i++){
        dp[n] = dp[n-1]+dp[n-2];
    }
    return dp[n];
}
//space optimisation
int optimisation(int n,vector<int> &dp){
    int prev2 = 0;
    int prev1 = 1;
    for(int i=2;i<=n;++i){
        int cur = prev2 + prev1;
        prev2 = prev1;
        prev1 = cur;
    } 
    return prev1;
}

int main(){
    int n;
    cout <<"Enter the value of N: ";
    cin>>n;
    //step 1 - create a dp array of size n+1
    vector<int> dp(n+1,-1);
    cout<<"The answer is : "<<f(n,dp)<<endl;
    cout<<"The answer is : "<<tabulation(n,dp)<<endl;
    cout<<"The answer is : "<<optimisation(n,dp);


    return 0;
}