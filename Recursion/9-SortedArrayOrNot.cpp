#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int> &arr,int size){
    //base case 
    if(size == 0 || size == 1){
         return true;
    }
    if(arr[0]>=arr[1]) {
        return false;
    }
    else{
        bool remainingPart = isSorted(vector<int>(arr.begin()+1,arr.end()),size-1);
        return remainingPart;
    }

    

}

int main(){
    vector<int> arr = {2,4,6,9,11,13};
    int size = arr.size();
    bool ans = isSorted(arr,size);
    if(ans) cout<<"sorted"<<endl;
    else cout<<"not sorted"<<endl;

    return 0;
}