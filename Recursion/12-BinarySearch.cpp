#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> arr,int low,int high,int key){
    // Base case
    if(low>=high){
        return false;
    }
    int mid = (low+high)/2;
    if(arr[mid] == key ){
        return true;
    }
    if(arr[mid]>key){
        return binarySearch(arr,low,mid-1,key);
    }
    
    return binarySearch(arr, mid +1,high,key);

}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int key = 6;
    int low = 0;
    int high = arr.size()-1;
    bool ans = binarySearch(arr,low,high,key);
    if(ans){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }


    return 0;
}