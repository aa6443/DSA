#include<bits/stdc++.h>
using namespace std;

//largest element in an array 
void sol1(vector<int> v){
    sort(v.begin(),v.end());
    int n  = v.size();
    cout<<"The largest element is : "<<v[n-1]<<endl;
}
void sol2(vector<int> v){
    int largest = -1;
    int n = v.size();
    for(int i=0;i<n;i++){
        if(v[i] > largest){
            largest = v[i]; 
        }
    }
    cout<<"The largest Element is : "<<largest<<endl;
}

int main(){
    vector<int> v = {2,3,12,1,7};
    //O(NlogN) solution 
    sol1(v);

    //0(N) solution 
    sol2(v);
    
    return 0;
}