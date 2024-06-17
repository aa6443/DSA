#include <bits/stdc++.h>
using namespace std;
void PrintArray(vector<int> &v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void InsertionSort(vector<int> &v,int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && v[j-1]>v[j]){
            int temp = v[j-1];
            v[j-1] = v[j];
            v[j] = temp;
            j--;
        }
    }
}


int main() {
    vector<int> v = {12, 11, 13, 5, 6};
    int n = v.size();
    PrintArray(v,n);
    InsertionSort(v,n);
    PrintArray(v,n);
    
    cout<<endl;
    return 0;
}
