#include<bits/stdc++.h>
using namespace std;

int power(int a,int n){
    //base case (if a^0 == 1) n =0
    if(n == 0){
        return 1;
    }
    //if a^1 = a if n = 1
    if(n == 1){
        return a;
    }
    //recursive relation 
    int ans = power(a,n/2);

    //if n is even 
    if(n%2 == 0){
        return ans*ans;
    }
    else{
        //if n  is odd 
        return a*ans*ans;
    }
}


int main(){
    int a;
    int n;
    cout<<"Enter the value of a and n : ";
    cin>>a>>n;
    int ans = power(a,n);

    cout<<"Answer is : "<<ans<<endl;

    return 0;
}