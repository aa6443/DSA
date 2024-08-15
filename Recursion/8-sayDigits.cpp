#include <bits/stdc++.h>
using namespace std;

void sayDigit(int n,vector<string> arr){
    //base case 
    if(n  == 0) return;
    //processing 
    int digit = n%10;
    n = n/10;
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}


int main(){
    vector<string> arr = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    sayDigit(n,arr);
    return 0;
}