//function to find factorial of a number using Recursion 
#include <bits/stdc++.h>
using namespace std;

int factorial(int n){

    //base case 
    if(n == 0) //0! = 1
        return 1;
    
    /*problem
    f(N) = N*f(N-1)
    badi      choti 
    problem    problem 
    */
    int choti = factorial(n-1);
    int badi = n*choti ;
    return badi;
}


int main () {

    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = factorial(n);
    cout<<ans <<endl;

    return 0;
}