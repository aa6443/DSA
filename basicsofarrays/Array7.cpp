#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = { 1,2,3,45,5};
    //finding max in the array 
    int n = v.size();
    int maxi = 0;
    for(int i=0;i<n;i++){
            maxi = max(maxi,v[i]);
    }
    auto i = max_element(v.begin(),v.end());
    cout << *i <<endl;
    cout<<"the maximum element is : "<<maxi << endl;

    return 0;
}