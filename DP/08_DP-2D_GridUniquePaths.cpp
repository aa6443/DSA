#include <bits/stdc++.h>
using namespace std;

int recursion(int i,int j){
    //base case 
    if(i == 0 && j == 0)  return 1; //if we reac destination means return count of 1;
    if(i<0 || j <0 ) return 0; //checking out of bound 
    //recursion will do the work 
    int up = recursion(i-1,j);
    int left = recursion(i,j-1);
    return up+left;
}
/*
    TC = O(2^m*n)
    SC = O(path length ) or (m-1)+(n-1) at max
*/
int memoisation(int i,int j,vector<vector<int>>& dp){
    //base case 
    if(i==0 && j==0){
        return 1;
    }
    if(i<0 || j<0){
        return 0;
    }
    if(dp[i][j] != -1) return dp[i][j];
    int up = memoisation(i-1,j,dp);
    int left = memoisation(i,j-1,dp);
    return dp[i][j]=up+left;
}
/*
    TC=O(N*M)
    SC=O(path length) or ((n-1)+(m-1)) + O(n*m)
*/


int main(){
    int m=3;
    int n=7;
    int ans = recursion(m-1,n-1);
    cout<<"The recursive solution is : "<<ans<<endl;
    vector<vector<int>> dp(m,vector<int>(n,-1));
    int ans1 = memoisation(m-1,n-1,dp);
    cout<<"The memoised solution is :"<<ans1<<endl;
    return 0;
}