#include <bits/stdc++.h>
using namespace std;

void printCount(int n){
    //base case 
    if(n == 0) return;
    //recursion  call 
    printCount(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    printCount(n);
    return 0;
}