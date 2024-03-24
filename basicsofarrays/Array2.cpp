//Finding Minimum and Maximum in an array 
#include<bits/stdc++.h>
using namespace std;
//Maximum function 
int Max(int arr[],int n){

    int maxi= INT_MIN ;

    for(int i=0;i<n;i++){

        maxi=max(maxi,arr[i]);  //Alternate way 
        // if(arr[i]>max){
        //     max=arr[i];
        // }
    }
    return maxi;
}

//Minimum function 
int Min(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;

    int num[100];
    //taking input array 
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"The maximum value of array is :"<<Max(num,size)<<endl;
    cout<<"The minimum value of array is :"<<Min(num,size)<<endl;
    return 0;
}