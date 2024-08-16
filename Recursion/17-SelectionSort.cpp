#include <bits/stdc++.h>
using namespace std;
/*
    Selection sort - select minimum and put it in first place 
 */
void SelectionSort(int *arr,int start,int end){
    //base case                    2,10,4,1,6 s=0 e=5
    if(start>=end){
        return;
    }
    //processing - do for 1 element 
    for(int i=start;i<end;i++){
        if(arr[start]>arr[i]){
            swap(arr[start],arr[i]);
        }
    }
    //recurrence relation 
    SelectionSort(arr,start+1,end); 
}
int main() {
    int arr[5] = {2,10,4,1,6};
    SelectionSort(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}