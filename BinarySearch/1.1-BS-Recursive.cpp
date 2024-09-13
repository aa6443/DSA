#include <bits/stdc++.h>
using namespace std;
int f(vector<int> arr,int low,int high,int  target){
    //base case 
    if(low >high) return -1;
    //checking 
    int mid = ( low + high ) / 2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] > target) {
        f(arr,low,mid-1,target);
    } 
    f(arr,mid+1,high,target);
}
int main(){
    vector<int> arr = {1,3,7,9,11,12,45};
    int n = arr.size();
    int target = 1;
    int low = 0;
    int high = n-1;
    int ans = f(arr,low,high,target);
    if(ans != -1){
        cout<<"The element found at index :"<<ans<<endl;
    }
    else{
        cout<<"The element is not present in the array "<<endl;
    }
    return 0;
}