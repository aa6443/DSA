//Remove dublicates from the array 
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,1,2,2,2,2,3,3};
    int n = arr.size();
    set<int> st;
    // for(int i=0;i<n;i++){
    //     st.insert(arr[i]);
    // }
    // for(auto it: st){
    //     cout<<it<<" ";
    // }
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    for(int j=0;j<i+1;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}