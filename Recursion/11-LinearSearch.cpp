#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> arr,int key,int &index){
    //base case 
    if(index == arr.size()){
        return false;//-1 shows that we didnt get the element 
    }
    if(arr[index] == key ){
        return true;
    }
    //processing 
    index = index+1;
    //recursion
    return linearSearch(arr,key,index);
}

int main(){

    vector<int> arr = {1,2,3,4,5};
    int key = 4;
    int index = 0;
    bool ans = linearSearch(arr,key,index);
    if(ans){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element not Found"<<endl;
    }

    return 0;
}