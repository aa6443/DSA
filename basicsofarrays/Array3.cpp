//Array Scope 
#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int num[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+num[i];
    }
    return sum;
}

int main(){

    int n;
    cin>>n;

    int element[100];
    for(int i=0;i<n;i++){
        cin>>element[i];
    }
    cout<<"The sum of array is :"<<sumOfArray(element,n)<<endl;

    return 0;
}