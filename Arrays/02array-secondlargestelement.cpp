#include<bits/stdc++.h>
using namespace std;
//second largest element in array
void sol1(vector<int> v){
    int n = v.size();
    // sorting
    sort(v.begin(),v.end());
    //checking from end the second largest element 
    int largest = v[n-1];
    int slargest = -1;
    for(int i=n-2;i>=0;i--){
        if(v[i] != largest){
            slargest = v[i];
            break;
        }
    }
    cout<<"The second largest element is : "<<slargest<<endl;
}

void sol2(vector<int> v){
    //finding the largest 
    int n = v.size();
    int largest = -1;
    for(int i=0;i<n;i++){
        if(v[i]>largest){
            largest = v[i];
        }
    }
    int slargest = -1;
    //finding second largest 
    for(int i=0;i<n;i++){
        if(v[i]>slargest && v[i] != largest){
            slargest = v[i];
        }
    }
    cout<<"The second largest is :"<<slargest<<endl;
}
void sol3(vector<int> v) {
    int n  = v.size();
    int largest = v[0];
    int slargest = -1;
    for(int i =0;i<n;i++){
        if(v[i]>largest) {
            slargest = largest;
            largest = v[i];
        }
        else if(v[i]<largest && v[i]>slargest){
            slargest = v[i];
        }
    }
    cout<<"The second largest element in array is : "<<slargest<<endl;
}


int main(){
    vector<int> v = {1,2,4,7,7,5};

    //O(NlogN ) solution 
    sol1(v);
    //O(2N) solution 
    sol2(v);
    //O(N) solution 
    sol3(v);
    return 0;
}