#include <bits/stdc++.h>
using namespace std;

int sumOfArr(vector<int> arr,int &sum,int index){
    //base case 
    if(index == arr.size() ){
        return 0;
    }
    // processing 
    sum = sum + arr[index];
    index = index+1;
    //recursive relation 
    sumOfArr(arr,sum,index);
    return sum;
}

int main(){
    vector<int> arr = {3,2,5,4,6};
    int sum = 0;
    int index = 0;
    int ans=sumOfArr(arr,sum,index);
    cout<<ans<<endl;
    return 0;
}