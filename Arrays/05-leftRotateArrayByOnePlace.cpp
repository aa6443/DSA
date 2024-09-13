#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    //storing the first value 
    int temp = arr[0];
    //shifting 
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    //pushing the last element 
    arr[n-1] = temp ;
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}