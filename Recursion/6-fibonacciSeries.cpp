#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    //base case 
    if(n == 0 ) return 0;
    if(n == 1) return 1;
    int ans = fib(n-1)+fib(n-2);
    return ans;
}
void printFib(int n){
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    printFib(n);

    return 0;
}