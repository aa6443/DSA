#include <bits/stdc++.h>
using namespace std;

int powerOf2(int n){
    //base case 
    if(n == 0) return 1;
    //recurrence relation 
    return 2*powerOf2(n-1);
}

int main(){
    int n;
    cin>>n;
    int ans = powerOf2(n);
    cout<<ans<<" ";
}