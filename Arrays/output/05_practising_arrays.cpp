#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,1,2,2,2,2,3,3};

    ///Two Pointer Approach 
    // int i =0;
    // for(int j=1;j<v.size();j++){
    //     if(v[j] != v[i]){
    //         v[i+1] = v[j];
    //         i++;
    //     }
    // }
    // cout<<(i+1)<<endl;  //i+1 because we are taking element from 0 

    //Reverse a vector without extra space 
    int start = 0;
    int end = v.size();
    
    int temp;
    while(start < end){
        if(start > end ) break;
        temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
    int i=0;
    while(i< 8){
        cout<<v[i]<<" " ;
    }
    

    return 0;
}