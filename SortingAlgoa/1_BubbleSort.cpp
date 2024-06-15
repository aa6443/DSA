#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> v){
    int n = v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> v = {22,1,105,4,11,1};
    int n = v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i] > v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    //printing 
    printArray(v);
    return 0;
}