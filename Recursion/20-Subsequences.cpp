#include <bits/stdc++.h>
using namespace std;
/*  ARR - [123]
   TAKE    1 -- 
   TAKE    -2- 
   ... SO ON  
*/
void printF(int ind,vector<int> &ds,vector<int> arr,int n){
    //base case 
    if(ind == n){
        for (auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //take or add a particular sub sequence to 
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,n);
    ds.pop_back();
    //not pick or not take condition ,this element is not added to your subsequence 
    printF(ind+1,ds,arr,n);
}
/*
        TC - O((2^n)*n)
        SC - O(n)
*/ 

int main(){
    vector<int> arr ={1,2,3};
    int n = arr.size();
    vector<int> ds;
    printF(0,ds,arr,n);
    return 0;
}