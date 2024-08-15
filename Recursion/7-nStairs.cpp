#include <bits/stdc++.h>
using namespace std;

int nStairs(int n){
    //base case 
    if(n == 0 ) return 1;
    if(n == 1) return 1;
    //recurrence relation 
    int ans = nStairs(n-1)+nStairs(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the no of stairs: ";
    cin>>n;
    int ans = nStairs(n);
    cout<<ans<<endl;
    return 0;
}