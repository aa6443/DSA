#include<bits/stdc++.h>
using namespace std;
//check whether the array is sorted or not 
int main(){
    vector<int> v = {1,2,2,3,3,4};
    int n = v.size();
    int flag = 1;
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]){

        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag){
        cout<<"sorted array"<<endl;
    }
    else{
        cout<<"not sorted "<<endl;
    }

    return 0;
}