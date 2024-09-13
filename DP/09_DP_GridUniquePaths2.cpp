#include <bits/stdc++.h>
using namespace std;
int recursion(int i,int j,vector<vector<int>>& obstacleGrid){
    //base case 
    if(i>= 0 && j>= 0 && obstacleGrid[i][j] == 1) return 0; //when there is some obstacle 
    if(i<0 || j< 0) return 0; //when the elements go out of the matrix 
    if(i == 0 && j == 0) return 1; //this is out destination 
    //recusion 
    int up = recursion(i-1,j,obstacleGrid);
    int left = recursion(i,j-1,obstacleGrid);
    return up + left;
}
int memoisation(int i,int j,vector<vector<int>>& obstacleGrid,vector<vector<int>>& dp){
    //base case 
    if(i == 1 && j == 1) return 1;
    if( i>=0 && j>= 0 && obstacleGrid[i][j] == 1 ) return 0;
    if(i < 0 || j<0 ) return 0;
    //dp checking 
    if(dp[i][j] != -1) return dp[i][j];

    int left = memoisation(i,j-1,obstacleGrid,dp);
    int up = memoisation(i-1,j,obstacleGrid,dp);
    
    return dp[i][j] = left + up ;
}
int tabulation(int n,int m,vector<vector<int>>& obstacleGrid,vector<vector<int>>& dp){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(obstacleGrid[i][j] == 1) dp[i][j] = 0;
            else if(i ==0 && j == 0) dp[i][j] = 1;
            else{
                int up = 0,left = 0;
                if(i>0 ) up = dp[i-1][j];
                if(j>0 ) left = dp[i][j-1];
                dp[i][j] = left + up;
            }
        }
    }
    return dp[n-1][m-1];
}
int optimisation(int n,int m,vector<vector<int>>& obstacleGrid)
int main()
{
    vector<vector<int>> obstacleGrid = {{0,0,0},{0,1,0},{0,0,0}};
    int n = obstacleGrid.size();
    int m = obstacleGrid[0].size();
    int ans = recursion(n-1,m-1,obstacleGrid);
    cout<<"The recursive solution is : "<<ans<<endl;
    vector<vector<int>> dp(n, vector<int>(m, -1));
    int ans2 = memoisation(n-1,m-1,obstacleGrid,dp);
    cout<<"The memosation solution is : "<<ans2<<endl;
    vector<vector<int>> dp1(n, vector<int>(m, -1));
    int ans3 = tabulation(n,m,obstacleGrid,dp1);
    cout<<"The memosation solution is : "<<ans3<<endl;

    return 0;
} 
