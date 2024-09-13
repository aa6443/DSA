#include <bits/stdc++.h>
using namespace std;
int f(vector<int> arr,int n,int target){
    int low = 0;
    int high = n-1;
    while (low<= high)
    {
        int mid = ( low + high ) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) high = mid - 1;
        else low = mid+1;
    }
    return -1;
    
}

int main(){
    vector<int> arr = {1,3,7,9,11,12,45};
    int n = arr.size();
    int target = 4;
    int ans = f(arr,n,target);
    if(ans != -1){
        cout<<"The element found at index :"<<ans<<endl;
    }
    else{
        cout<<"The element is not present in the array "<<endl;
    }
    return 0;
}