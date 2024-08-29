#include <bits/stdc++.h>
using namespace std;

int recursion(int day,int last,vector<vector<int>> arr){
    //base case 
    if(day == 0){
        int maxi = 0;
        for(int i=0;i<=2;++i){
            if(i != last){
                maxi = max(maxi,arr[day][i]);
            }
        }
        return maxi;
    }
    //solving the case 
    int maxi = 0;
    for(int i=0;i<=2;++i){
        if(i != last){ // taking the current task and updating last value and calling the recursion  
            int activity = arr[day][i] + recursion(day-1,i,arr);
            maxi = max(maxi,activity);
        }
    }
    return maxi;
}
int memoisation(int day,int last,vector<vector<int>> arr,vector<vector<int>>& dp){
    //base case
    if(day == 0){
        int maxi = 0;
        for(int i=0;i<=2;++i){
            if(i != last){
                maxi = max(maxi,arr[day][i]);
            }
        }
        return dp[day][last] = maxi;
    }
    //check if value present in dp or not 
    if(dp[day][last] != -1) return dp[day][last];
    //recursive relation 
    int maxi = 0;
    for(int i=0;i<=2;i++){
        if(i != last){
            int activity = arr[day][i]  + memoisation(day-1,i,arr,dp);
            maxi = max(maxi,activity);
        }
    }
    return dp[day][last] = maxi;
}
int tabulation(vector<vector<int>>& arr,int n){
    vector<vector<int>> dp(n,vector<int>(4,0));
    dp[0][0] = max(arr[0][1],arr[0][2]);
    dp[0][1] = max(arr[0][0],arr[0][2]);
    dp[0][2] = max(arr[0][0],arr[0][1]);
    dp[0][3] = max({arr[0][0],arr[0][1],arr[0][2]});

    for(int day=1;day<n;day++){
        for(int last = 0;last<4;last++){
            dp[day][last] = 0;

            for(int task=0;task<4;task++){
                if(task != last){
                    int point = arr[day][task] + dp[day-1][task];
                    dp[day][last] = max(dp[day][last],point);
                }
            }
        }
    }
    return dp[n-1][3];
}
int optimisation(vector<vector<int>>& arr,int n){
    vector<int> prev(4,0);
    prev[0] = max(arr[0][1],arr[0][2]);
    prev[1] = max(arr[0][0],arr[0][2]);
    prev[2] = max(arr[0][0],arr[0][1]);
    prev[3] = max({arr[0][0],arr[0][1],arr[0][2]});
    
    for(int day=1;day<n;day++){
        vector<int> temp(4,0);
        for(int last =0;last<4;last++){
            temp[last] =0;
            for(int task=0;task<3;task++){
                if(task != last){
                    temp[last] = max(temp[last],arr[day][task]+prev[task]);
                }
            }
        }
        prev =temp;
    }
    return prev[3];
}
int main(){
    int n = 3;
    vector<vector<int>> arr = {{1,2,5},{3,1,1},{3,3,3}};
    //initialising N*4 dp 
    int ans = recursion(n-1,3,arr);
    cout<<"The maximum using recursion is  : "<<ans<<endl;
    vector<vector<int>> dp(n,vector<int>(4,-1));
    int ans1 = memoisation(n-1,3,arr,dp);
    cout<<"The answer using memoisation is : "<<ans1<<endl;
    int ans2 = tabulation(arr,n);
    cout<<"The answer with tabulation is : "<<ans2<<endl;
    int ans3 = optimisation(arr,n);
    cout<<"The answer using optimisation is : "<<ans3<<endl;
    return 0;
}