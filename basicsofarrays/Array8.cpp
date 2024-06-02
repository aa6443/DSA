//I Will easily get 10lacs per month salart and it will increase with time 

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = { 1,2,4,4,5};
    //2nd largest element in the array 
    sort(v.begin(),v.end());
    int n = v.size();
    int largest = v[n-1];
    int slargest = 0;
    for(int i=0;i<n;i++){
        if(v[i]<largest && v[i]>slargest){
            slargest = v[i];
        }
    }
    cout<<slargest<<endl;
    return 0;
}