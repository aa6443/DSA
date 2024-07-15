//This is using top down approach -> using recursion + memoisation with 1d array 
/*
#include <bits/stdc++.h>
using namespace std;

int fib(int n,vector<int> &dp){
    // base case 
    if(n <= 1)  return n;

    //step 3
    if(dp[n] != -1 ) return dp[n];


    // return fib(n-1) + fib(n-2);  // we will do this in recursion
    //step 2 
    dp[n] = fib(n-1,dp) + fib(n-2,dp);
    return dp[n];
}



int main(){
    int n;
    cin>>n;
    //step 1
    vector<int> dp(n+1);  //or storing the already calculated values or //memoisation   
    for(int i=0;i<=n;i++){  //initialisation of dp with -1 
        dp[i] = -1;
    }
    cout << fib(n,dp) <<endl;

    return 0;
}
// TC = O(2n)
// SC = O(n)
*/

/*
-------------------------------------------------------------------------------------------------------------------
*/

/*
DP using bottom up approach 

int main(){

    int n;
    cin>>n;

    //step 1
    vector<int> dp(n+1);
    //step 2
    dp[0] = 0;
    dp[1] = 1;
    //step 3
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<<dp[n] <<endl;

    return 0;
}
// TC = O(n)
// SC = O(n)
*/

//DP using space optimisation 

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int prev1 = 1;
    int prev2 = 0;

    for(int i=2;i<=n;i++){
        int curr = prev1 + prev2 ;
        prev2 = prev1;
        prev1 = curr;
    }
    cout<<prev1 <<endl;


    return 0;
}
// TC = O(n) 
//SC = O(1)