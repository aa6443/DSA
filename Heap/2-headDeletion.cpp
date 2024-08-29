#include <bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size ;
    //constructor 
    Heap(){
        arr[0] = -1;
        size = 0;
    }
    //insertion 
    /*
    TC = O(logN)
    */
    void insertion(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;
        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++)//i=1 bcoz at 0 we have no element 
        {
            cout << arr[i] << " ";
        }
        cout << endl ;
    }
    //TC - O(logN) 
    void deletefromheap(){
        //if size is zero nothing to delete 
        if(size == 0){
            cout<<"Nothing to  delete "<<endl;
        }
        //step 1
        arr[1] = arr[size];
        //step 2
        size = size - 1  ;
        //step 3 - putting element to correct index 
        int i=1;
        while(i<size){
            int leftIndex = i*2;
            int rightIndex = i*2 + 1;
            
            if(leftIndex<size && arr[leftIndex]> arr[i]){
                swap(arr[leftIndex],arr[rightIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[rightIndex] > arr[i]){
                swap(arr[rightIndex],arr[i]);
                i = rightIndex;
            }
            else{
                return;
            }
        }

    }

};

int main(){
    Heap h;
    h.insertion(50);
    h.insertion(55);
    h.insertion(53);
    h.insertion(52);
    h.insertion(54);
    h.print();
    h.deletefromheap();
    h.print();
    return 0;
}