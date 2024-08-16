#include <bits/stdc++.h>
using namespace std;

void sortArray(int *arr, int n){
    //base case - already sorted
    if(n == 0 || n == 1){
        return;
    }
    //solve 1 case - place largest element to the end of array 
    for(int i=0;i<n-1;++i){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}


int main() {
    // Your code here
    int arr[5] = {2,5,1,6,9};
    sortArray(arr,5);
    //printing 
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}